#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
        this->prev = NULL;
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
    n->prev = temp;
}

void Remove(Node *&head, int k)
{
    Node *temp = head;
    int count = 1;
    while (temp != NULL && count != k)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    return;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->prev == NULL)
        {
            if (temp->next != NULL)
            {
                cout << "NULL<-" << temp->value << "<=>";
            }
            else
            {
                cout << "NULL<-" << temp->value << "->NULL" << endl;
            }
        }
        else
        {
            if (temp->next != NULL)
            {
                cout << temp->value << "<=>";
            }
            else
            {
                cout << temp->value << "->NULL" << endl;
            }
        }

        temp = temp->next;
    }

    return;
}

int main()
{
    Node *head;
    Node *one = new Node(1);
    head = one;
    AddToTail(head, 2);
    AddToTail(head, 3);
    AddToTail(head, 4);
    AddToTail(head, 5);
    AddToTail(head, 6);
    AddToTail(head, 7);
    AddToTail(head, 8);
    AddToTail(head, 9);
    display(head);
    Remove(head, 3);
    display(head);

    return 0;
}