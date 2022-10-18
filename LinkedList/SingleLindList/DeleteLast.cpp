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

void display(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->value << "->";
        tem = tem->next;
    }
    cout << endl;
    return;
}

int main()
{
    Node *head;
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    display(head);
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    display(head);
    return 0;
}