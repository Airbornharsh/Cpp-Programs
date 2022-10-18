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

bool CheckCycle(Node *&head)
{
    Node *SlowPtr = head;
    Node *FastPtr = head;

    while (FastPtr != NULL && FastPtr->next != NULL)
    {
        SlowPtr = SlowPtr->next;
        FastPtr = FastPtr->next->next;
        if (SlowPtr == FastPtr)
        {
            return true;
        }
    }
    return false;
}

void MakeCycle(Node *&head, int k)
{
    int c = 1;
    Node *temp = head;
    Node *CycleStart;

    while (c != k)
    {
        c++;
        temp = temp->next;
    }
    CycleStart = temp;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = CycleStart;

    return;
}

void RemoveCycle(Node *&head)
{
    Node *slowPtr = head;
    Node *fastPtr = head;

    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if (slowPtr == fastPtr)
        {
            break;
        }
    }

    fastPtr = head;
    while (fastPtr->next != slowPtr->next)
    {
        fastPtr = fastPtr->next;
        slowPtr = slowPtr->next;
    }

    slowPtr->next = NULL;
    return;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            cout << temp->value << "->";
        }
        else
        {
            cout << temp->value << "->NULL" << endl;
        }
        temp = temp->next;
    }

    return;
}

int main()
{
    Node *head;
    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    Node *six = new Node(6);
    Node *seven = new Node(7);
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;
    display(head);
    MakeCycle(head, 4);
    cout << CheckCycle(head) << endl;
    RemoveCycle(head);
    cout << CheckCycle(head) << endl;
    display(head);
    return 0;
}
