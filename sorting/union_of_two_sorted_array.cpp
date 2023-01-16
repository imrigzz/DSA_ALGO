#include <iostream>
#include <string>
#include <vector>

using namespace std;

void union_arr(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {

        if (a[i] == a[i - 1] && i > 0) // check if same as previous or not
        {
            i++;
            continue;
        }
        if (b[j] == a[j - 1] && j > 0)
        {
            j++;
            continue;
        }

        if (a[i] < b[j]) // merge steps
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
    {
        if (i > 0 && a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    }
    while (j < n)
    {
        if (j > 0 && b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
    }
}

int main()
{
    int a[] = {10, 20, 20};
    int b[] = {5, 20, 40, 40};
    union_arr(a, b, 3, 4);
    return 0;
}
