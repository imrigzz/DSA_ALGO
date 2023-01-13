#include <iostream>
#include <string>
using namespace std;

// Abstraction : hiding the complex methods or features behind sinple procedures
class abstract_student
{
public:
  virtual void askPromotion() = 0; // pure virtual function : force all its derived classes to implement its own function called askPromotion()
};

// whichever class inherits the abstract_student class have to provide the askPromotion() function
class graduate : public abstract_student
{
public:
  void askPromotion()
  {
    cout << "you are graduate only: no promotion";
  }
};

class post_graduate : public abstract_student
{
public:
  void askPromotion()
  {
    cout << "you are post graduate : wait 1 year for promotion";
  }
};

class phd : public abstract_student
{
public:
  void askPromotion()
  {
    cout << "you are phd : congrats for promotion";
  }
};

// Polymorphism eg: GRADUATE programmer have no idea about phd program he only know he hvae to implement the askPromotion(), vice versa
int main()
{
  abstract_student *s1 = new graduate(); // phd, graduate, post_graduate
  s1->askPromotion();
  return 0;
}