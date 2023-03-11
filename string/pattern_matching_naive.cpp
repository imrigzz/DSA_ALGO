#include <iostream>
#include <string>
#include <vector>
using namespace std;

void pattern_matching(string str, string pat)
{
    int ts = str.length();
    int ps = pat.length();
    for (int i = 0; i < ts; i++)
    {
        int j;
        for (j = 0; j < ps; j++)
        {
            if (pat[j] != str[i + j])
            {
                break;
            }
        }
        if (j == ps)
        {
            cout << i << " ";
        }
    }
}

// if pattern is all distinct elements
void distinct_pattern_matching(string str, string pat)
{
    int ss = str.length();
    int ps = pat.length();
    for (int i = 0; i <= ss - ps;)
    {
        int j;
        for (j = 0; j < ps; j++)
        {
            if (pat[j] != str[i + j])
            {
                break;
            }
        }
        if (j == ps)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = i + j;
        }
    }
}

int main()
{
    string str = "helowgar";
    string pat = "owgar";
    pattern_matching(str, pat);
    cout << endl;
    distinct_pattern_matching(str, pat);
    return 0;
}
