#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    int group_length = 0;
    vector<int> vec = {1, 1, 1, 0, 0, 0, 1, 0, 1, 0};
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] != vec[i - 1])
        {
            if (vec[i] != vec[0])
            {
                cout << i << " ";
            }
            else
            {
                cout << i - 1 << endl;
            }
        }
    }
    if (vec[vec.size() - 1] != vec[0])
    {
        cout << vec.size() - 1 << endl;
    }

    return 0;
}
