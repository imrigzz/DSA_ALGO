#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Equilateraltriangle
{
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float length)
    {
        a = length;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }

    friend void PrintResult(Equilateraltriangle);
    friend class homework;
};

// Friend function can access the private and protected members of class
void PrintResult(Equilateraltriangle et)
{
    cout << " circumferance = " << et.circumference << endl;
    cout << " circumferance = " << et.area << endl;
}

// friend class
class homework
{
public:
    void PrintResult1(Equilateraltriangle et)
    {
        cout << " circumferance = " << et.circumference << endl;
        cout << " circumferance = " << et.area << endl;
    }
};

int main()
{
    Equilateraltriangle et;
    et.setA(3);
    PrintResult(et);

    homework h;
    h.PrintResult1(et);

    return 0;
}
