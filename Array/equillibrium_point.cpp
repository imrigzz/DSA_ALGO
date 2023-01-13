#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {3, 4, 8, -9, 20, 6};
    int rs = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        rs += vec[i];
    }
    int ls = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        rs -= vec[i];
        if (ls == rs)
        {
            cout << "Equillibrium at index : " << i << ", With value " << vec[i] << endl;
        }
        ls += vec[i];
    }

    return 0;
}
