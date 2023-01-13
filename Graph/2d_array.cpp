#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printans(vector<vector<int>> ans)
{
    int n = 2, m = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // your code here
    int n = 2, m = 2;
    int r = m, c = n;
    vector<vector<int>> mat{
        {1, 2},
        {3, 4}};

    vector<vector<int>> ans(n, vector<int>(m));
    cout << ans.size() << " : " << ans[0].size();

    int row = mat.size();
    int col = mat[0].size();
    if ((r * c) < (row * col))
    {
        cout << "same matrix" << endl;
    }
    int x = 0, y = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[x][y] = mat[i][j];
            if (y == c)
            {
                x++;
                y = 0;
            }
            else
            {
                y++;
            }
        }
        if (x == r)
        {
            printans(ans);
        }
    }
    return 0;
}
