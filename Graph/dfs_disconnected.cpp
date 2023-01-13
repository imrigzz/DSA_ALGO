#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*

    dfs traversal of disconnected graph and no of islands

    0 ---- 1
    -      -  -
    -      -    4
    -      -  -
    2 ---- 3

    5 ---- 6-----9
    -
    -
    -
    7------8
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

void dfs(vector<int> adj[], int s, vector<int> &visited)
{

    visited[s] = true;
    cout << s << " ";
    for (int x : adj[s])
    {
        if (visited[x] == false)
        {
            dfs(adj, x, visited);
        }
    }
}

void dfs_dis(vector<int> adj[], int v, int s)
{
    vector<int> visited(v + 1, false);
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            dfs(adj, i, visited);
            count++;
            cout << endl;
        }
    }
    cout << "No of island : " << count;
}

int main()
{
    int v = 10;
    vector<int> adj[v]; // array of vectors
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 2, 3);
    add_edge(adj, 1, 3);
    add_edge(adj, 3, 4);
    add_edge(adj, 1, 4);
    add_edge(adj, 5, 6);
    add_edge(adj, 5, 7);
    add_edge(adj, 7, 8);
    add_edge(adj, 6, 9);
    print_adj(adj, v);

    cout << "\n\n\n\nDFS: \n";

    dfs_dis(adj, v, 0);
    return 0;
}
