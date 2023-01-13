#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    unsigned int x = 5, y = 1;
    cout << "And : " << (x & y) << endl;
    cout << "Or : " << (x | y) << endl;
    cout << "Left shift : " << (x << 1) << endl;
    cout << "Right shift : " << (x >> 1) << endl;
    cout << "Xor : " << (x ^ y) << endl;
    cout << "Negation : " << (~x) << endl;

    return 0;
}
