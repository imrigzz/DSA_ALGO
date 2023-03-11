#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rotated(string str, string str1)
{
    string str2 = str + str;
    if (str2.find(str1) != string::npos)
    {
        cout << "rotated";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    string str = "hellow";
    string str1 = "hellwo";
    rotated(str, str1);
    return 0;
}
