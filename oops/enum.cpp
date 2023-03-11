#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum sports
{
    football,
    cricket,
    volleyball,
    basket_ball
};

void getPlayingSport(sports playing)
{
    switch (playing)
    {
    case football:
        cout << "football playing 02/04";
        break;
    case cricket:
        cout << "cricket playing 06/04";
        break;
    case volleyball:
        cout << "volleyball playing 10/04";
        break;
    case basket_ball:
        cout << "basket_ball playing 20/04";
        break;
    default:
        break;
    }
}

int main()
{

    getPlayingSport(basket_ball);

    // enum iteration

    // for (int playing = football; playing != basket_ball; playing++)
    // {

    //     switch (playing)
    //     {
    //     case football:
    //         cout << "football";
    //         break;
    //     case cricket:
    //         cout << "cricket";
    //         break;
    //     case volleyball:
    //         cout << "volleyball";
    //         break;
    //     case basket_ball:
    //         cout << "basket_ball";
    //         break;
    //     default:
    //         break;
    //     }
    //     cout << endl;
    // }

    // using int input
    // int userInput;
    // cin >> userInput;

    // sports playing;
    // playing = sports(userInput);

    // switch (playing)
    // {
    // case football:
    //     cout << "football";
    //     break;
    // case cricket:
    //     cout << "cricket";
    //     break;
    // case volleyball:
    //     cout << "volleyball";
    //     break;
    // case basket_ball:
    //     cout << "basket_ball";
    //     break;
    // default:
    //     break;
    // }

    return 0;
}
