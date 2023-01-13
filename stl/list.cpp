#include <iostream>
#include <string>
#include <vector>
#include <list>

// this is a doubly linked list
//  faster than vector, dequeue, forward_list -> insertion, removal, moving ele : given position

using namespace std;

void prnt(list<int> l1)
{
    for (auto ele : l1)
    {
        cout << ele << " ";
    }
    cout << endl;
}

bool odd(const int &value)
{ // Predicate implemented as a function
    if (value % 2 == 0)
    {
        return false;
    }
    return true;
}

int main()
{
    list<int> l1 = {1, 2, 34, 5};

    // list push_back()
    l1.push_back(99);
    prnt(l1);

    // list push_front()
    l1.push_front(0);
    prnt(l1);

    // list insert()
    list<int>::iterator it = l1.begin(); // create iterator
    advance(it, 3);                      // move to fourth position
    l1.insert(it, 4);                    // insert
    prnt(l1);

    // remove(val)
    l1.remove(34);
    prnt(l1);

    // remove_if(odd,even,prime)
    l1.remove_if(odd);
    prnt(l1);

    return 0;
}
