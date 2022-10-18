#include <iostream>
using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;
    ListNode(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1;
        temp1 = l1;
        ListNode *temp2;
        temp2 = l2;
        ListNode *NewNode;
        ListNode *temp0 = NewNode;
        int SumTemp = 0, Sum = 0;

        while (temp1->next != NULL || temp2->next != NULL)
        {
            cout << "Hiii";
            Sum = temp1->value + temp2->value + SumTemp;
            cout << Sum;
            if (Sum <= 9)
            {
                cout << "BYE1";
                ListNode *any = new ListNode(Sum);
                SumTemp = 0;
                temp0->next = any;
                cout << "last";
                temp0 = any;
            }
            else
            {
                cout << "BYE2";
                ListNode *any = new ListNode(Sum);
                SumTemp = Sum / 10;
                any->value = Sum % 10;
                temp0->next = any;
                temp0 = any;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NewNode;
    }
};

void display(ListNode *head)
{
    ListNode *tem = head;
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
    ListNode *head1;
    ListNode *one1 = new ListNode(2);
    ListNode *two1 = new ListNode(4);
    ListNode *three1 = new ListNode(3);
    head1 = one1;
    one1->next = two1;
    two1->next = three1;
    three1->next = NULL;

    ListNode *head2;
    ListNode *one2 = new ListNode(5);
    ListNode *two2 = new ListNode(6);
    ListNode *three2 = new ListNode(4);
    head2 = one2;
    one2->next = two2;
    two2->next = three2;
    three2->next = NULL;

    Solution a;
    display(head1);
    display(head2);
    display(a.addTwoNumbers(head1, head2));

    return 0;
}