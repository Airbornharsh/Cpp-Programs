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

void AddToTail(Node *&head, int val)
{
    Node *n = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *tem = head;
    while (tem->next != NULL)
    {
        cout << tem->value << "->";
        tem = tem->next;
    }
    cout << tem->value << endl;
    return;
}

Node *MoveKnode(Node *&head, int k)
{
    Node *temp1 = head;
    int count = 0;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
        count++;
    }
    temp1->next = head;
    Node *tempnew = head;
    int c = 0;
    while (c != (count - k))
    {
        tempnew = tempnew->next;
        c++;
    }

    head = tempnew->next;
    tempnew->next = NULL;

    return head;
}

int main()
{
    Node *head;
    Node *n = new Node(1);
    head = n;
    AddToTail(head, 2);
    AddToTail(head, 3);
    AddToTail(head, 4);
    AddToTail(head, 5);
    AddToTail(head, 6);
    AddToTail(head, 7);
    AddToTail(head, 8);
    AddToTail(head, 9);
    display(head);
    Node *Newhead;
    Newhead = MoveKnode(head, 3);
    display(Newhead);
    return 0;
}