#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

struct myhash
{
    int bucket;
    list<int> *table; // pointer to a list of int

    myhash(int b)
    {
        bucket = b;
        table = new list<int>[bucket]; // make an array of size 5 with list of int type
    }
    void insert_key(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    void remove_key(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
    void search_key(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
        {
            if (x == key)
            {
                cout << key << " : found\n";
            }
        }
    }
};

int main()
{
    // your code here
    myhash m(7);
    m.insert_key(70);
    m.insert_key(71);
    m.insert_key(9);
    m.insert_key(56);
    m.insert_key(72);
    m.insert_key(14);
    m.insert_key(21);
    m.insert_key(28);
    m.insert_key(35);

    // m.search_key(56);
    // m.search_key(72);
    // m.remove_key(71);
    // m.search_key(71);
    // m.search_key(9);
    m.search_key(35);

    return 0;
}
