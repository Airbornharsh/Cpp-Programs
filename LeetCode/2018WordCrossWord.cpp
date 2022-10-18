#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     bool placeWordInCrossword(vector<vector<char>> &board, string word)
//     {
//         int StringLength = word.length();
//         vector<int> rowEmpty;
//         rowEmpty.assign(board.size(), 0);
//         vector<int> columnEmpty;
//         columnEmpty.assign(board[0].size(), 0);
//         vector<vector<int>> characterPresent;

//         for (int i = 0; i < board.size(); i++)
//         {
//             for (int j = 0; j < board[i].size(); j++)
//             {
//                 if (board[i][j] == ' ')
//                 {
//                     rowEmpty[i]++;
//                     columnEmpty[j]++;
//                 }
//                 else if (board[i][j] != '#')
//                 {
//                     vector<int> tempData = {board[i][j], i, j};
//                     characterPresent.push_back(tempData);
//                 }
//             }
//         }

//         if (checkRows(rowEmpty, StringLength) || checkColumns(columnEmpty, StringLength))
//         {
//             return true;
//         }

//         // cout << rowEmpty[characterPresent[0][1]];
//         // cout << columnEmpty[characterPresent[0][2]];

//         for (int i = 0; i < characterPresent.size(); i++)
//         {

//         }

//         return true;
//     }

//     bool checkRows(vector<int> &rowEmpty, int &StringLength)
//     {
//         for (int i = 0; i < rowEmpty.size(); i++)
//         {
//             if (StringLength == rowEmpty[i])
//             {
//                 return true;
//             }
//         }
//         return false;
//     }

//     bool checkColumns(vector<int> &columnEmpty, int &StringLength)
//     {
//         for (int i = 0; i < columnEmpty.size(); i++)
//         {
//             if (StringLength == columnEmpty[i])
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution
{
public:
    bool placeWordInCrossword(vector<vector<char>> &board, string word)
    {
        int StringLength = word.length();
        vector<int> rowEmpty;
        rowEmpty.assign(board.size(), 0);
        vector<int> columnEmpty;
        columnEmpty.assign(board[0].size(), 0);
        vector<vector<int>> characterPresent;

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == ' ')
                {
                    rowEmpty[i]++;
                    columnEmpty[j]++;
                }
                else if (board[i][j] != '#')
                {
                    vector<int> tempData = {board[i][j], i, j};
                    characterPresent.push_back(tempData);
                }
            }
        }

        if (characterPresent.size() == 0)
        {
            return true;
        }

        for (int i = 0; i < characterPresent.size(); i++)
        {
            this->checkSpace(board, char(characterPresent[i][0]), characterPresent[i][1], characterPresent[i][2], word);
            // cout << characterPresent[i][0] << endl;
        }

        cout << endl;
        return true;
    }

    bool checkSpace(vector<vector<char>> &board, char character, int rowth, int columnth, string word)
    {

        if (word.length() == 0)
        {
            return true;
        }

        // checkSize()
        if (board[rowth][columnth - 1] == ' ' && columnth != 0)
        {
            cout << rowth << " " << columnth << endl;
            checkSpace(board, character, rowth, columnth - 1, word);
        }
        else if (board[rowth - 1][columnth] == ' ' && rowth != 0)
        {
            cout << rowth << " " << columnth << endl;
            checkSpace(board, character, rowth - 1, columnth, word);
        }
        else if (board[rowth][columnth + 1] == ' ' && rowth != board[0].size())
        {
            cout << rowth << " " << columnth << endl;
            checkSpace(board, character, rowth + 1, columnth, word);
        }
        else if (board[rowth + 1][columnth] == ' ' && columnth != board.size())
        {
            cout << rowth << " " << columnth << endl;
            checkSpace(board, character, rowth, columnth + 1, word);
        }

        return false;
    }
};

int main()
{
    vector<vector<char>> board = {{'a', ' ', '#'}, {' ', ' ', '#'}, {'#', ' ', 'c'}};
    Solution c;
    cout << c.placeWordInCrossword(board, "ca");
}