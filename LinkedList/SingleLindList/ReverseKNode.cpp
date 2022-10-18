// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *next;

//     Node(int val)
//     {
//         this->value = val;
//         this->next = NULL;
//     }
// };

// void display(Node *head)
// {
//     Node *tem = head;
//     while (tem != NULL)
//     {
//         cout << tem->value << "->";
//         tem = tem->next;
//     }
//     cout << endl;
//     return;
// }

// void ReverseKNode(Node *head, int k)
// {

//     Node *pre = NULL;
//     Node *curr = head;
//     Node *nex = NULL;
//     Node *ford;
//     int m;
//     while (curr->next != NULL && m != k)
//     {
//         nex = curr->next;
//         curr->next = pre;

//         pre = curr;
//         curr = nex;
//         m++;
//     }
//     nex = curr->next;
//     head = pre;
//     ford->next=curr; 
// }

// int main()
// {
//     Node *head;
//     Node *one = new Node(1);
//     Node *two = new Node(2);
//     Node *three = new Node(3);
//     Node *four = new Node(4);
//     Node *five = new Node(5);
//     Node *six = new Node(6);
//     Node *seven = new Node(7);
//     head = one;
//     one->next = two;
//     two->next = three;
//     three->next = four;
//     four->next = five;
//     five->next = six;
//     six->next = seven;
//     seven->next = NULL;
//     display(head);
//     ReverseKNode(head,3);
//     display(head);
//     return 0;
// }