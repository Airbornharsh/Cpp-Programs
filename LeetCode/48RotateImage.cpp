#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int size;
    void rotate(vector<vector<int>> &matrix)
    {
        this->size = matrix.size();

    }

    void display(vector<vector<int>> &data)
    {
        for (int i = 0; i < this->size; i++)
        {
            for (int j = 0; j < this->size; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {2, 4, 3, 5, 3}, {5, 6, 3, 9, 8}, {5, 3, 7, 2, 6}, {6, 4, 2, 6, 3}};
    Solution s;
    s.size = matrix.size();
    s.display(matrix);
    // s.rotate(matrix);
    // s.display(matrix);
}