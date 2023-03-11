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

int operator+(student &s1, student &s2)
{
    return s1.roll + s2.roll;
}

int main()
{
    // your code here:
    student s1 = student(1, "rigzin", 8);
    cout << s1; // operator overloading, printing the object of class
    student s2 = student(2, "diana", 10);
    cout << s2;
    cout << "sum of roll numbers of both: " << s1 + s2;
    return 0;
}
