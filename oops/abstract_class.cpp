#include <iostream>
#include <string>
#include <vector>
using namespace std;

class smartphone
{
public:
    virtual void display_price() = 0;
};

class nokia : public smartphone
{
public:
    void display_price()
    {
        cout << "18000" << endl;
    }
};

class samsung : public smartphone
{
public:
    void display_price()
    {
        cout << "50000" << endl;
    }
};

int main()
{
    // your code here
    // samsung s1;
    // s1.display_price();
    smartphone *s1 = new samsung();
    s1->display_price();
    s1 = new nokia();
    s1->display_price();
    return 0;
}
