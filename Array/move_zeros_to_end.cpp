#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    vector<int> vec = {10, 5, 0, 0, 8, 0, 9, 0};
    int j = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != 0)
        {
            int temp = vec[j];
            vec[j] = vec[i];
            vec[i] = temp;
            j++;
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
