#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mat;
    int size;
    vector<vector<int>> targetMat;
    vector<vector<int>> target;

    bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
    {
        this->mat = mat;
        this->target = target;
        this->targetMat = mat;
        this->size = mat.size();
        if (this->checkEqual())
        {
            return true;
        }
        else if (rotation1())
        {
            return true;
        }
        else if (rotation2())
        {
            return true;
        }
        else if (rotation3())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool checkEqual()
    {
        for (int i = 0; i < this->size; i++)
        {
            for (int j = 0; j < this->size; j++)
            {
                if (this->target[i][j] != this->targetMat[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool rotation3()
    {
        vector<vector<int>> v = this->mat;
        for (int y = 0, i = 0; y < this->size, i < this->size; y++, i++)
        {
            for (int x = this->size - 1, j = 0; x >= 0, j < this->size; x--, j++)
            {
                v[x][y] = this->mat[i][j];
            }
        }
        this->targetMat = v;
        return this->checkEqual();
    }

    bool rotation2()
    {
        vector<vector<int>> v = this->mat;
        for (int x = this->size - 1, i = 0; x >= 0, i < this->size; x--, i++)
        {
            for (int y = this->size - 1, j = 0; y >= 0, j < this->size; y--, j++)
            {
                v[x][y] = this->mat[i][j];
            }
        }
        this->targetMat = v;
        return this->checkEqual();
    }

    bool rotation1()
    {
        vector<vector<int>> v = this->mat;
        for (int y = this->size - 1, i = 0; y >= 0, i < this->size; y--, i++)
        {
            for (int x = 0, j = 0; x < this->size, j < this->size; x++, j++)
            {
                v[x][y] = this->mat[i][j];
            }
        }
        this->targetMat = v;
        return this->checkEqual();
    }

    void display(vector<vector<int>> data)
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
    Solution s;
    vector<vector<int>> mat = {{0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}};
    vector<vector<int>> target = {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}};
    cout<<s.findRotation(mat, target);
}