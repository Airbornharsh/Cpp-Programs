#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int i)
{

    if (st.empty())
    {
        st.push(i);
        return;
    }

    int ti = st.top();
    st.pop();
    insertAtBottom(st,i);

    st.push(ti);
}

void ReverseNo(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int i = st.top();
    st.pop();
    ReverseNo(st);

    insertAtBottom(st, i);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    ReverseNo(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
