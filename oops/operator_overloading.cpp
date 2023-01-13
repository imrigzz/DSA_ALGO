#include <iostream>
#include <string>
#include <vector>
using namespace std;

class student
{
public:
    int roll;
    string name;
    int standard;

    student(int r, string n, int std)
    {
        roll = r;
        name = n;
        standard = std;
    }
};

ostream &operator<<(ostream &COUT, student &s)
{
    COUT << "Name: " << s.name << endl;
    COUT << "Roll no:  " << s.roll << endl;
    COUT << "Class: " << s.standard << endl;
    return COUT;
}

int main()
{
    // your code here:
    student s1 = student(1, "rigzin", 8);
    cout << s1; // operator overloading, printing the object of class
    student s2 = student(2, "diana", 10);
    cout << s2;

    return 0;
}
