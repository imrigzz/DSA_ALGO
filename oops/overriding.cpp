#include <iostream>
#include <string>
#include <vector>
using namespace std;

class parent
{
public:
    void foo()
    {
        cout << "you called parent" << endl;
    }
};

class child : public parent
{
public:
    void foo()
    {
        cout << "you called child" << endl;
        parent::foo();
    }
};

int main()
{
    // your code here
    child c1;
    c1.foo();
    c1.parent::foo();
    return 0;
}
