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

void AddToHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head->prev = n;
    head = n;
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

    AddToHead(head, 0);
    display(head);

    return 0;
}