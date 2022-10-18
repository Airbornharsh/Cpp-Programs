#include <iostream>
#include <vector>
using namespace std;

class movie
{
public:
    string name;
    int rating; // 1 to 5
    string Description;

    void input(string n, int r, string d)
    {
        this->name = n;
        this->rating = r;
        this->Description = d;
    }
};

class movies
{
public:
    vector<movie> Mov;

    void pushMovie(string n, int r, string d)
    {
        movie mo;
        this->createMovie(n, r, d, mo);
        return;
    }

    void createMovie(string n, int r, string d, movie m)
    {

        m.input(n, r, d);
        Mov.push_back(m);
        return;
    }
};

int main()
{
    movies M;
    M.pushMovie("NARUTO", 5, "This is a Series Which I Loved To Watch");
    M.pushMovie("One Piece", 5, "Very Interesting");
    M.pushMovie("Fairy TAil", 5, "This series is Related to Magic");
    for (int i = 0; i < M.Mov.size(); i++)
    {
        cout <<"Movie Name: "<< M.Mov[i].name << "."<<endl<<"Rating: "<<M.Mov[i].rating << "."<<endl<<"Description: "<<M.Mov[i].Description<<"." << endl;
    }
    return 0;
}