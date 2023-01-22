#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

void anagram(string s1, string s2)
{
    unordered_map<char, int> um;
    if (s1.length() != s2.length())
    {
        cout << "not anagram" << endl;
        return;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        um[s1[i]] += 1;
        um[s2[i]] -= 1;
    }
    for (auto x : um)
    {
        cout << x.first << " " << x.second << endl;
        if (x.second != 0)
        {
            cout << "not anagram";
            return;
        }
    }
    cout << "anagram";
}

int main()
{
    string s1 = "mon";
    string s2 = "mondea";
    anagram(s1, s2);
    return 0;
}
