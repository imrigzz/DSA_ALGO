#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // your code here
    // majority elements are those which occurs more than n/2 times
    vector<int> vec = {6, 8, 7, 6, 6};

    int candidate = vec[0], vote = 1;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == candidate)
        {
            vote++;
        }
        else
        {
            vote--;
            if (vote == 0)
            {
                candidate = vec[i];
                vote++;
                cout << "switched to candidate" << candidate << endl;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == candidate)
        {
            count++;
        }
    }

        int n = vec.size();
    if (count > n / 2)
    {
        cout << candidate << endl;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
