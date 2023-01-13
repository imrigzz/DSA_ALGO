#include <iostream>
#include <string>
#include <vector>
using namespace std;

//-1 =  empty
// -2 = deleted

struct myHash
{
    int cap, size;
    int *arr;
    myHash(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key % cap;
    }

    // 1: search till -1 is found
    // 2: if no -1, then go round and find till h is found again
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            i = (i + 1) % cap; // to go and search round in circle
            if (i == h)
            {
                return false;
            }
        }
        return false;
    }

    // 1) check arry full or not
    // 2) search empty location
    // 3) if found do insert and increase size
    // 4) can insert till size == capacity
    bool insert(int key)
    {
        if (size == cap)
        {
            return false; // full
        }
        int i = hash(key);
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key) // search empyt space, if not empty, not deleted or not key alreday present
        {
            cout << "searching for empty space .. " << endl;
            i = (i + 1) % cap;
        }
        // if arr[i] == key then break
        if (arr[i] == key)
        {
            return false;
        }
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }

    // same as search
    //  1: check if array[hash] is equal key or not
    //  2: if not increment i, and check if i==h
    //  3: if yes return false else keep searching
    bool delete_key(int key)
    {
        int h = hash(key);
        int i = h;
        while (i != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
            {
                return false;
            }
        }
    }

    void display()
    {
        cout << "The hash status: ";
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // your code here
    myHash m1(7);
    m1.insert(49);
    m1.display();
    m1.insert(50);
    m1.display();
    m1.insert(63);
    m1.display();
    m1.insert(64);
    m1.display();
    m1.insert(68);
    m1.display();
    m1.delete_key(63);
    m1.display();
    m1.insert(70);
    m1.display();
    return 0;
}
