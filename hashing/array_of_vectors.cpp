#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> *p;
    p = new vector<int>[3];
    p[0].push_back(0);
    p[0].push_back(1);
    p[0].push_back(2);
    p[0].push_back(3);
    p[0].push_back(4);

    p[1].push_back(10);
    p[1].push_back(11);
    p[1].push_back(12);
    p[1].push_back(13);
    p[1].push_back(14);

    p[2].push_back(20);
    p[2].push_back(21);
    p[2].push_back(22);
    p[2].push_back(23);
    p[2].push_back(24);
    p[2].push_back(25);
    p[2].push_back(26);

    // print
    for (int i = 0; i < 3; i++)
    {
        cout << i << "  :  ";
        for (auto x : p[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
