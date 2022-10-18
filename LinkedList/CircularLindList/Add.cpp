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

// void Addhead(Node *&head, int val)
// {
//     Node *n = new Node(val);
//     Node *temp = head;

//     if (temp->next == NULL)
//     {
//         n->next = n;
//         head = n;
//         return;
//     }

//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->next = head;
//     head = n;
//     return;
// }

void AddToTail(Node *&head, int val)
{
    // if (head->next == NULL)
    // {
    //     Addhead(head, val);
    //     return;
    // }

    Node *k = new Node(val);
    Node *temp = head;

    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = k;
    k->next = head;
}

void display(Node *&head)
{
    Node *tem = head;
    do
    {
        cout << tem->value << "->";
        tem = tem->next;
    } while (tem != NULL);
    cout << endl;
    return;
}

int main()
{
    Node *head;
    Node *n = new Node(1);
    head = n;
    n->next = n;
    AddToTail(head, 2);
    AddToTail(head, 3);
    AddToTail(head, 4);
    AddToTail(head, 5);
    AddToTail(head, 6);
    AddToTail(head, 7);
    display(head);
    return 0;
}
