#include <iostream>
#include <vector>
using namespace std;
// using Vector
class stack
{
    vector<int> st;

public:
    void push(int val)
    {
        st.push_back(val);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is already Empty.";
            return;
        }
        st.pop_back();
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "stack is already Empty.";
            return -1;
        }
        int last = st.size() - 1;

        return st[last];
    }
    bool isEmpty()
    {
        return st.size() == 0;   //return TRUE if the function is empty..
    }
};
int main()
{
    stack s;
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(4);
    s.push(3);
    s.push(2);
    s.pop();
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}