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

Node *Merge(Node *&head1, Node *&head2)
{
    Node *newhead;
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *temp;
    if (temp1->value >= temp2->value)
    {
        temp = temp2;
        temp2 = temp2->next;
    }
    else
    {
        temp = temp1;
        temp1 = temp1->next;
    }
    newhead = temp;
    while (temp1->next != NULL && temp2->next != NULL)
    {
        Node *k;
        if (temp1->value > temp2->value)
        {
            temp->next = temp2;
            k = temp2;
            temp = k;
            temp2 = temp2->next;
        }
        else
        {
            temp->next = temp1;
            k = temp1;
            temp = k;
            temp1 = temp1->next;
        }
    }
    if (temp1->value > temp2->value)
    {
        Node *m = temp1;
        Node *n = temp2;
        temp->next = temp2;
        m = temp2;
        temp = m;
        temp->next = temp1;
        n = temp1;
        temp = n;
        temp->next = NULL;
    }
    else
    {
        Node *m = temp2;
        Node *n = temp1;
        temp->next = temp1;
        m = temp1;
        temp = m;
        temp->next = temp2;
        n = temp2;
        temp = n;
        temp->next = NULL;
    }

    return newhead;
}

void display(Node *&head)
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

int main()
{
    Node *head1;
    Node *head2;
    Node *n1 = new Node(1);
    Node *n2 = new Node(0);
    head1 = n1;
    head2 = n2;
    AddToTail(head1, 2);
    AddToTail(head1, 5);
    AddToTail(head1, 6);
    AddToTail(head1, 9);
    AddToTail(head1, 10);
    AddToTail(head1, 13);
    AddToTail(head2, 3);
    AddToTail(head2, 4);
    AddToTail(head2, 7);
    AddToTail(head2, 8);
    AddToTail(head2, 11);
    AddToTail(head2, 12);
    Node *Newhead;
    Newhead = Merge(head1, head2);
    display(Newhead);
    return 0;
}