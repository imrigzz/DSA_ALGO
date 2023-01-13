#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct n
{
    int age;
    string name;
    n()
    {
        age = 10;
        name = "rigzin";
    }
};

int main()
{
    // n n_obj;
    // n *n1; // pointer to class object
    // n1 = &n_obj;
    // n1->age = 10;

    // n *n1;
    // n1 = new n;
    // cout << n1->age << "\n"
    //      << n1->name;

    int n;
    cin >> n;
    int *p;
    p = (int *)(malloc(sizeof(int[n])));
    p[0] = 1;
    cout << p[0];
    cout << "endf";

    return 0;
}
