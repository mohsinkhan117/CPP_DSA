#include <bits/stdc++.h>
using namespace std;
int main()
{
    // last in first out   [LIFO]
    stack<int> st;
    st.push(2);
    st.emplace(5);
    st.emplace(3);
    st.emplace(4);
    st.emplace(9);
    cout << st.top() << endl;
    cout << st.top() << endl;

    //  if you don't want to remove top element, we store it in temporary variable

    stack<int> temp = st; // copy stack

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    // this will pop all elements and at last the stack will become empty
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    cout << "Top element after poping all  " << st.top();
}