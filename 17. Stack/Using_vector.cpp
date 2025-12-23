#include <iostream>
#include <vector>
using namespace std;
template <class t>
class Stack
{
    vector<t> st;

public:
    void push(t val)
    {
        st.push_back(val);
    }
    void pop()
    {
        st.pop_back();
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Already Empty.";
            return -1;
        }
        return st[st.size() - 1]; // if want index but if want top element then st[(st.size())-1]
    }
    bool isEmpty()
    {
        return (st.size() == 0);
    }
};
int main()
{
    Stack<int> s;
    s.push(10);
    s.push(40);
    s.push(100);
    s.push(404);
    s.push(107);
    s.push(409);
    s.push(100);
    s.push(0);
    s.push(1);
    s.push(4);
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}