#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head;
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    Node *zero = new Node(0);
    head = zero;
    zero->next = one;

    cout << zero->value << endl;
    cout << one->value << endl;
    cout << two->value << endl;
    cout << three->value << endl;


    return 0;
}
