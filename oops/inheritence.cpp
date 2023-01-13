#include <iostream>
#include <string>
using namespace std;

// Inheritance:  inheriting the parent class info to child class

class abstract_student // abstract class
{
  virtual void askPromotion() = 0; // pure virtual function
};

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
  // abstraction complex function
  void askPromotion()
  {
    if (Age >= 30)
    {
      cout << Name << " got promoted" << endl;
    }
    else
    {
      cout << "Sorry, " << Name << " no promotion" << endl;
    }
  }
};

class cs : public student
{
private:
  string Fav_programming_language;

public:
  // constructor
  cs(string name, string company, int age, string fav_programming_language) : student(name, company, age)
  {
    Fav_programming_language = fav_programming_language;
  }

  void writes_programs()
  {
    cout << getName() << " writes programs in " << Fav_programming_language << endl;
  }
};

int main()
{
  // code starts from here
  student s1 = student("achuk", "xepic", 26);
  s1.setAge(28);
  cout << "Student " << s1.getName() << " age is : " << s1.getAge() << endl;

  // //inherited class
  cs c1 = cs("amo", "jkbank", 36, "java");
  c1.writes_programs();
  c1.askPromotion();
  return 0;
}