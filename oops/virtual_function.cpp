#include <iostream>
#include <string>
#include <vector>
using namespace std;

class company
{
public:
    string name;
    int years;

    virtual void company_details()
    {
        cout << "This function will let u know company details..." << endl;
    }
};

class mercedes : public company
{
public:
    void company_details()
    {
        cout << "Hello you are in Mercedes Benz now" << endl;
    }
};

class ford : public company
{
public:
    void company_details()
    {
        cout << "Hello you are in ford now" << endl;
    }
};

int main()
{
    // your code here

    company *p = new mercedes();
    p->company_details();

    ford f1;
    company *p1 = &f1;
    p1->company_details();

    return 0;
}
