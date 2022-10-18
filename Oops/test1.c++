#include <iostream>
using namespace std;

class roommate
{
public:
    string name;
    int RollNo;
    string Girlfriend;

    void setName(string s, int r, string g)
    {
        this->name = s;
        this->RollNo = r;
        this->Girlfriend = g;
    }

    void print()
    {
        cout << name << endl;
        cout << RollNo << endl;
        if (Girlfriend == "None")
        {
            cout << name << " has None" << endl;
        }
        else
        {
            cout << name << " Loves " << Girlfriend << endl;
        }
    }
};

int main()
{
    roommate a, b, c, d,e;
    a.setName("Harsh", 30,"s");
    b.setName("Santosh", 48, "her");
    c.setName("Nrusingh", 39, "her");
    d.setName("Rohit", 44, "None");
    e.setName("Bikash",22, "her");
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    return 0;
}
