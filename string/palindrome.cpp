#include <iostream>
#include <string>
#include <vector>
using namespace std;
void palindrome(string str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            cout << "not palindrome";
            return;
        }
        i++;
        j--;
    }
    cout << "palindrome";
}
int main()
{
    string str = "gzgzg";
    palindrome(str);
    return 0;
}
