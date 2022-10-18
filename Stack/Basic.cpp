#include <iostream>
using namespace std;

#define n 100

class Stack
{

    int *arr;
    int top = -1;

public:
    Stack()
    {
        arr = new int[n];
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Doesn't Have Memory" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "There is No Element Left" << endl;
            return;
        }

        top--;
    }

    void topEl()
    {
        if (top == -1)
        {
            cout << "No Element to Display" << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    void empty()
    {
        if (top == -1)
        {
            cout << "Stack IS  Empty" << endl;
            return;
        }

        cout << "Stack Has has Elements" << endl;
        return;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.topEl();
    st.pop();
    st.pop();
    st.topEl();
    st.pop();
    st.pop();
    st.pop();
    st.empty();

    return 0;
}