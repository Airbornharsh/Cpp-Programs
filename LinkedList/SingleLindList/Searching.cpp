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

    int search;
    cin >> search;

    Node *temp = head;
    int k = 0;
    while (temp->next != NULL)
    {
        if (temp->value == search)
        {
            cout << "Found" << endl;
            k = 1;
            break;
        }
        temp = temp->next;
    }

    if (k == 0)
    {
        cout << "NOT Found" << endl;
    }
    return 0;
}
