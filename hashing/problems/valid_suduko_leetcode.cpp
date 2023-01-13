#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{

    unordered_map<char, int> m_box1;
    unordered_map<char, int> m_box2;
    unordered_map<char, int> m_box3;

    for (int i = 0; i < board.size(); i++)
    {
        unordered_map<char, int> m_row;
        unordered_map<char, int> m_col;
        for (int j = 0; j < board[1].size(); j++)
        {
            if (board[i][j] != ".")
            {
                m_row[board[i][j]] += 1;
                if (m_row[board[i][j]] > 1)
                {
                    return false;
                }
                if (board[j][i] != ".")
                {
                    m_col[board[j][i]] += 1;
                    if (m_col[board[j][i]] > 1)
                    {
                        return false;
                    }

                    if (board[i][j] != ".")
                    {
                        if (j < 3)
                        {
                            m_box1[board[i][j]] += 1;
                            if (m_box1[board[i][j]] > 1)
                            {
                                return false;
                            }
                        }
                        if (j < 6)
                        {
                            m_box2[board[i][j]] += 1;
                            if (m_box2[board[i][j]] > 1)
                            {
                                return false;
                            }
                        }
                        if (j < 9)
                        {
                            m_box3[board[i][j]] += 1;
                            if (m_box3[board[i][j]] > 1)
                            {
                                return false;
                            }
                        }
                    }
                }
            }
        }

        int main()
        {
            // your code here
            return 0;
        }
