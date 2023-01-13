#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  // code starts from here
  vector<vector<string>> parse_table;
  vector<string> rows;
  rows.push_back("s1");
  rows.push_back("s2");
  rows.push_back("s3");
  rows.push_back("s4");

  parse_table.push_back(rows);
  vector<string> rows2;
  rows2.push_back("t1");
  rows2.push_back("t2");
  rows2.push_back("t3");
  rows2.push_back("t4");

  parse_table.push_back(rows2);

  for (int i = 0; i < parse_table.size(); i++)
  {
    for (int j = 0; j < parse_table[i].size(); j++)
    {
      cout << parse_table[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}