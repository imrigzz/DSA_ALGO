#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
using namespace std;

// To print the element which occures equal or more than n/k times in array
// [10, 10, 20 ,30, 20, 10, 10]
//  size of array(n) = 7, lets say k=2
// Ans = 10
// because n/k = 7/2 = 3.5
// so element greater than or equal to 3.5 occurence is 10 only
// how to solve in O(n) time complexity

int main()
{
    // your code here
    // vector<int> vec = {10, 10, 20, 30, 20, 10, 10}; // let this be input
    vector<int> vec = {10, 10, 20, 20, 20, 20, 80, 80, 80, 80, 30, 30, 30}; // let this be input
    int n = vec.size();
    float k = 4;
    float val = n / k;
    // now n/k = 13/4 =  3.25
    // Ans : 20, 80 lets run and check

    // first insert the elements in the map ie unorered_map
    unordered_map<int, int> um;
    // we will insert the unique element as the key and as value we store no of occurence
    for (int i = 0; i < vec.size(); i++)
    {
        um[vec[i]] += 1;
    }
    // now in map we store the values
    // 10: 4
    // 20: 2
    // 30: 1
    // now all we have to do is traverse through map elemnts and print whose value is greater or equal to n/k ie 3.5 here now
    for (auto p : um)
    {
        if (p.second >= ceil(float(n / k))) // int will take 3 only but we need 3.5, we will convert to ceil value as 3.5 occurence is not possible
        {
            cout << p.first << endl;
        }
    }
    // thats it;
    // lets run;
    return 0;
}
