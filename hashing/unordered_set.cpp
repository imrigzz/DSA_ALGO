#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

// unordered set : used the hashing for unordered set
//     |->traversing can get different output on different compilers
// store only unique values

int main()
{
    unordered_set<string> tablets;

    // insert
    tablets.insert("ipad");
    tablets.insert("ipad air");
    tablets.insert("ipad mini");
    tablets.insert("ipad pro");

    for (auto it = tablets.begin(); it != tablets.end(); it++)
    {
        cout << *it << "\n";
    }

    // size
    cout << "No of tables : " << tablets.size() << endl;

    // find
    if (tablets.find("ipad air") != tablets.end())
    {
        cout << "found " << *tablets.find("ipad air") << endl;
    }

    // count
    if (tablets.count("ipad air") > 0)
    {
        cout << "As it it set it will have unique elements only : " << tablets.count("ipad air") << endl;
    }

    // find
    auto it = tablets.find("ipad");
    tablets.erase(it);
    cout << "size after erase of ipad : " << tablets.size() << endl;

    // erase
    tablets.erase("ipad mini");
    cout << "size after erase of ipad mini : " << tablets.size() << endl;

    // auto it = tablets.begin();
    // advance(it, 1);
    tablets.erase(tablets.begin(), tablets.end());
    cout << "size after erase from begin to end : " << tablets.size() << endl;

    // clear
    tablets.clear();
    cout << "No of tablets after clear : " << tablets.size() << endl;

    return 0;
}
