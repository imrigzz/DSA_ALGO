#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void powerset(string s)
{
    int n = s.length();
    int powset_n = (1 << n); // same as 2^n

    for (int i = 0; i < powset_n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << s[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // your code here
    // cout << (5 & (1 << 2));
    string s = "abc";
    powerset(s);
    return 0;
}
