// Linked list implementation in C++

#include <bits/stdc++.h>
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
    Node *three = new Node(2);
    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;
    cout << head->next << endl;
    cout << one->value << endl;
    cout << one->next << endl;
    cout << two->value << endl;
    cout << two->next << endl;
    cout << three->value << endl;
    cout << three->next << endl;

    return 0;
}
