#include <iostream>
#include <stack>
using namespace std;
void displayStack(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displayStack(st);
    cout << x << " ";
    st.push(x);
}
void RemoveKElement(stack<int> &st, int k)
{
    stack<int> temp;
    while (temp.size() < k)
    {
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    temp.pop();
    while (temp.size() > 0)
    {
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    displayStack(st);
    RemoveKElement(st, 3);
    cout << endl;
    displayStack(st);
}