#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    int n = str.length();
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main()
{
    // your code here
    string str = "bangnab";
    cout << isPalindrome(str, 0, str.length() - 1);
    return 0;
}
