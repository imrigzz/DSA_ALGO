#include <iostream>
#include <string>
using namespace std;

class emplyee
{
public:
  string name;
  string company;
  int age;

  // CONSTRUCTOR
  // 1: NO DATA TYPE
  // 2: SAME NAME AS CLASS
  emplyee(string n, string c, int a)
  {
    name = n;
    company = c;
    age = a;
  }
  void intro()
  {
    cout << "Name : " << name << endl;
    cout << "Company : " << company << endl;
    cout << "Age : " << age << endl;
  }
};

int main()
{
  // code starts from here
  emplyee emp1 = emplyee("jane", "xepic", 25);
  emp1.intro();
  emplyee emp2 = emplyee("amochun","ssc", 27);
  emp2.intro();
  return 0;
}