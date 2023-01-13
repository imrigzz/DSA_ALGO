#include <iostream>
#include <string>
#include <vector>
using namespace std;

void permutation(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permutation(s, i + 1);
        swap(s[i], s[j]); // to get back to parent orignal string needed
    }
}
int main()
{
    // your code here
    string s = "abc";
    permutation(s);
    return 0;
}
