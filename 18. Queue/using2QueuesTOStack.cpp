#include <iostream>
#include <queue>
using namespace std;
template <class t>
class Stack
{
    queue<t> q1, q2;

public:
    void push(int data)
    {
        if (q1.empty())
            q1.push(data);
        else
        {
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(data);
            while (!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    void pop()
    {
        if (q1.empty())
        {
            cout << "Empty";
            return;
        }
        else
        {
            q1.pop();
        }
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
void printStack(Stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return;
}
int main()
{
    Stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    printStack(S);
    S.pop();
    S.pop();
    printStack(S);
    
    return 0;
}