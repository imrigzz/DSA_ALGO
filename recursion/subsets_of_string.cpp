#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subsets(string s, string curr = "", int idx = 0)
{
    if (idx == s.length())
    {
        cout << curr << " ";
        return;
    }
    subsets(s, curr, idx + 1);
    subsets(s, curr + s[idx], idx + 1);
}

int main()
{
    // your code here
    string str = "God";
    subsets(str);
    return 0;
}
