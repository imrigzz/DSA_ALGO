#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*

    bfs traversal of disconnected graph and no of islands

        0
      -   -
    1 ----- 2

    3----4

    5-----7-----8
    -
    -
    6

*/

void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print_adj(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << " : ";
        for (int x : adj[i]) // for each loop
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void bfs(vector<int> adj[], int s, vector<int> &visited)
{
    queue<int> qu;
    qu.push(s);
    while (qu.empty() == false)
    {
        int temp = qu.front();
        visited[temp] = true;
        qu.pop();
        cout << temp << " ";
        for (int x : adj[temp])
        {
            if (visited[x] == false)
            {
                qu.push(x);
                visited[x] = true;
            }
        }
    }
}

void bfs_dis(vector<int> adj[], int v, int s)
{
    vector<int> visited(v + 1, false);
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            bfs(adj, i, visited);
            count++;
            cout << endl;
        }
    }
    cout << "No of island : " << count;
}

int main()
{
    int v = 9;
    vector<int> adj[v]; // array of vectors
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 5, 6);
    add_edge(adj, 5, 7);
    add_edge(adj, 7, 8);
    print_adj(adj, v);

    cout << "\n\n\n\nBFS: \n";

    bfs_dis(adj, v, 0);
    return 0;
}
