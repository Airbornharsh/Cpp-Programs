#include <iostream>
#include <stack>
using namespace std;

void ReverseSentence(string s)
{

    stack<string> st;
    string word;
    for (int i = 0; i < s.length(); i++)
    {
        word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    string s = "Hey, I am Harsh";
    ReverseSentence(s);
    return 0;
}
