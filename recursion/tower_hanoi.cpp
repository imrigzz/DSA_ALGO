#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 1)

     --
    ----
   ------
    A           B           C

# USE A: SOURCE, B: DESTINATION, C:AUXILLARY


2)
    ----
   ------                   --
    A           B           C


3)

   ------      ----         --
    A           B           C


4)



                --
               ----        ------
    A           B           C


5)

# USE B: SOURCE, C: DESTINATION, A:AUXILLARY

    --        ----        ------
    A           B           C
6)

                           ----
    --                    ------
    A           B           C

7)
                             --
                            ----
                           ------
    A           B           C
8)


*/

void towerMoves(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Move 1 : " << a << " -> " << c << endl;
        return;
    }
    // SOURRCE AUXILLARY DESTINATION
    towerMoves(n - 1, a, c, b);
    cout << "Move " << n << " : " << a << " -> " << c << endl;
    towerMoves(n - 1, b, a, c);
}

int main()
{
    // your code here
    towerMoves(2, 'A', 'B', 'C');
    return 0;
}
