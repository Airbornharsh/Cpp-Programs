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

    Node *zero = new Node(5);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = zero;
    zero->next = NULL;

    Node *tem = head;
    while (tem->next != NULL)
    {
        cout << tem->value << endl;
        tem = tem->next;
    }

    return 0;
}
