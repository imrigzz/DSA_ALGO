#include <iostream>
#include <vector>
#include <map>           //for orderded map
#include <unordered_map> //for unordered map
#include <string>
#include <list>
using namespace std;

int main()
{
  // Map in cpp is just like dictionary in python (key:value pair)
  map<int, string> to_buy;
  to_buy.insert(pair<int, string>(3, "mulberry"));
  to_buy.insert(pair<int, string>(1, "craneberry"));
  to_buy.insert(pair<int, string>(2, "blueberry"));

  // // unordered map //pushed at front now
  // unordered_map<int, string> to_buy;
  // to_buy.insert(pair<int, string>(3, "mulberry"));
  // to_buy.insert(pair<int, string>(1, "craneberry"));
  // to_buy.insert(pair<int, string>(2, "blueberry"));

  // prints in the order of ascending order of key
  for (auto pair : to_buy)
  {
    cout << pair.first << ". " << pair.second << endl;
  }

  // access a specific element
  to_buy[3] = "strawberry";
  cout << "key 3 value updated to : " << to_buy[3] << endl;
  // size()
  cout << "Size of map : " << to_buy.size() << endl;
  // clear()
  to_buy.clear();
  cout << "Size of map after clear : " << to_buy.size() << endl;

  // complex map  //pokedex name: attacks of pokemon
  map<string, list<string>> pokedex;
  list<string> pikachuAttacks{"Thunder Shock", "Thunderbolt", "Thunder"};
  list<string> CharmenderAttacks{"Flame thrower", "Flame bolt", "Flame shot"};
  list<string> SnorlaxAttacks{"Earthquake", "HeavySlam", "Skull bush"};

  pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
  pokedex.insert(pair<string, list<string>>("Charmender", CharmenderAttacks));
  pokedex.insert(pair<string, list<string>>("Snorlax", SnorlaxAttacks));

  for (auto pair : pokedex)
  {
    cout << pair.first << " -> ";
    for (auto attack : pair.second)
    {
      cout << attack << ", ";
    }
    cout << endl;
  }
  return 0;
}