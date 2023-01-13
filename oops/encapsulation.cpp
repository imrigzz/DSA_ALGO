#include <iostream>
#include <string>
using namespace std;

// encapsulation: wrapping up of data and methods withn class purpose of preventing the anything outside of class to be able to directly access or modify it.

class student
{
  // hiding these data's cannot access directly
private:
  string Name;
  string Company;
  int Age;

public:
  // constructor
  student(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }
  // getters and setters
  void setName(string name)
  {
    Name = name;
  }
  string getName()
  {
    return Name;
  }

  void setCompany(string company)
  {
    Company = company;
  }
  string getCompany()
  {
    return Company;
  }

  void setAge(int age)
  {
    if (age >= 18)
    {
      Age = age;
    }
  }
  int getAge()
  {
    return Age;
  }
};

int main()
{
  // code starts from here
  student s1 = student("achuk", "xepic", 26);
  s1.setAge(28);
  cout << "Student " << s1.getName() << " age is : " << s1.getAge() << endl;
  return 0;
}