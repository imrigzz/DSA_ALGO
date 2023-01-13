#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void possible_words(int n, string s)
{
}

int main()
{
    // your code here
    int n = 2;
    int x = 97;
    // string s = "";
    // cout << s + char(x);
    vector<string> vec(pow(3, n));
    for (int i = 0; i < 9; i++)
    {
        vec[i] += char(x);
        vec[i] += char(x + 1);
        vec[i] += char(x + 2);

        cout << vec[i] << endl;
        x += 3;
    }

    return 0;
}
