#include <iostream>
#include <string>
using namespace std;

// Polymorphism: ability of object or method to have many forms, (Most common use: parent class reference used to refer object of c hild class)

class abstract_student
{
  virtual void askPromotion() = 0;
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

  virtual void work()
  {
    cout << Name << " is working on the writing politicals affairs." << endl;
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

  void work()
  {
    cout << getName() << " is working on the writing java program." << endl;
  }
};

int main()
{
  // code starts from here
  cout << "\n\n";
  student s1 = student("achuk", "xepic", 26);
  s1.setAge(28);
  cout << "Student " << s1.getName() << " age is : " << s1.getAge() << endl;
  s1.work();

  cout << "\n\n";
  // //inherited class
  cs c1 = cs("amo", "jkbank", 36, "java");
  c1.writes_programs();
  c1.askPromotion();
  c1.work();

  cout << "\n\n";
  // polymorphism can use one funtion for different derive classes
  student *s2 = &c1;
  s2->work();

  cout << "\n\n";
  return 0;
}