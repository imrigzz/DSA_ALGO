#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec;

    // insert
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(1);

    // access from front
    cout << vec.front();
    // acess from end
    cout << vec.back();

    // remove
    vec.pop_back();
    cout << vec.back();

    // check empty
    cout << vec.empty();

    cout << endl;
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        j++;
    }
    cout << " J is :" << j;
    return 0;
}
