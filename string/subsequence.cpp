#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subsequence(string str, string sub)
{
    int i = 0, j = 0;
    while (i < str.length())
    {
        if (str[i] == sub[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if (j == sub.length())
        {
            cout << "found";
            return;
        }
    }
    cout << "not found";
}

int main()
{
    string str = "goodins";
    string sub = "ois";
    subsequence(str, sub);
    return 0;
}
