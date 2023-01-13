#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*

    to create a graph using the adjacency list(vector as list)

        0
        -   -
        -     -
        -       1  - - -  3
        -     -
        -   -
        2

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

void bfs(vector<int> adj[], int v, int s)
{
    queue<int> qu;
    vector<bool> visited(v, false);
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

int main()
{
    int v = 5;
    vector<int> adj[v]; // array of vectors
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 2);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 2, 3);
    add_edge(adj, 2, 4);
    add_edge(adj, 3, 4);
    print_adj(adj, v);
    cout << "\n\n\n\nBFS: \n";
    bfs(adj, v, 3);
    return 0;
}
