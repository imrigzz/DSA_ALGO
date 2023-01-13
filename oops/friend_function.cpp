#include <iostream>
#include <string>
#include <vector>
using namespace std;

class brand
{
private:
    string name;
    string product_type;
    int worth_in_billion;

public:
    void set_data(string n, string x, int y)
    {
        name = n;
        product_type = x;
        worth_in_billion = y;
    };

    friend void showbrand(brand);
};

void showbrand(brand b)
{
    cout << b.name << " makes " << b.product_type << " " << b.worth_in_billion; // able to acess the private members of class
}

int main()
{
    // your code here
    brand b1;
    b1.set_data("mercedes", "vehicals", 52);
    showbrand(b1);
    return 0;
}
