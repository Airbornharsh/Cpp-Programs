#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node()
    {
    }

    Node(int n)
    {
        this->value = n;
        this->next = NULL;
    }
};

// Node* Reverse(Node *&head)
// {
//     Node *newhead;
//     Node *temp = head->next;
//     Node *temp1 = temp->next;
//     Node *temp2 = temp1->next;
//      while (temp2->next != NULL)
//     {
//         cout<<temp2->value<<endl;

//         temp1->next = temp;
//         temp = temp1;
//         temp1 = temp2;
//         temp2 = temp2->next;
//     }
//     return newhead;
// }

bool check(Node *head)
{
    vector<int> a;
    Node *temp = head;
    while (temp->next != NULL)
    {
        a.push_back = temp->value;
    }
}

int main()
{
    Node *head;
    Node *one = new Node[1];
    Node *two = new Node[2];
    Node *three = new Node[4];
    Node *four = new Node[4];
    Node *five = new Node[2];
    Node *six = new Node[1];
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    head = one;

    return 0;
}