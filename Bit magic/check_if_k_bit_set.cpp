#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main()
{

    int n = 9, k = 4;
    // int x = pow(2, k - 1);
    // // cout << (n & x) << endl;
    // if ((n & x) != 0)
    // {
    //     cout << "Set" << endl;
    // }
    // else
    // {
    //     cout << "Not set" << endl;
    // }

    // we can also do by left and right shift
    // x = 1<<(k-1) ie left shift 1 till k;
    int x = (1 << (k - 1));
    // cout << x;
    if ((n & x) != 0)
    {
        cout << "Set" << endl;
    }
    else
    {
        cout << "Not Set" << endl;
    }
    return 0;
}
