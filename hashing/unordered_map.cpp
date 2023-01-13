#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// unorderd map:  time complexity O(1): search insert delete
// implementd using hasing
// key:value pair  (in unorderd form, keys need ot be unique)

int main()
{
    // your code here
    unordered_map<int, string> tabs;
    // membber access
    tabs[1] = "ipad air 4";
    cout << tabs[1] << endl
         << endl; // returns reference to menbers

    // insert
    tabs.insert({2, "ipad pro"});
    tabs.insert({3, "ipad mini"});

    // print all
    for (auto y : tabs)
    {
        cout << y.first << " " << y.second << endl;
    }

    for (auto it = tabs.begin(); it != tabs.end(); it++) // itabs.end() iterator pointing to element after the last element
    {
        cout << it->first << " " << it->second << endl; // iterator returns address; (-> used for pointer to class)
    }

    // find
    if (tabs.find(1) != tabs.end())
    {
        cout << "Found 1, name is : " << tabs.find(1)->second << endl; // tabs.find(1) returned reference to it if found else referencs to tabs.end()
    }
    else
    {
        cout << "Not found\n";
    }

    auto x = tabs.find(3);
    cout << x->second;

    // count function returns the count of no of times it is present : returns 0 and 1 only as hashing cannot store same element twice
    if (tabs.count(1) > 0)
    {
        cout << "Count : " << tabs.count(1) << endl;
    }

    tabs.insert({1, "ipad pro plus"}); // doesnt inserted as laready present
    if (tabs.count(1) > 0)
    {
        cout << "Count : " << tabs.count(1) << endl;
    }
    tabs[1] = "ipad pro plus";
    cout << tabs[1] << endl;

    // size()
    cout << "size of tabs : " << tabs.size() << endl;

    // erase -> can pass value or iterator
    tabs.erase(3);
    auto it = tabs.begin();
    tabs.erase(it, tabs.end());
    cout << "The size after removed items: " << tabs.size();
    return 0;
}
