#include <iostream>
#include <stack>
using namespace std;
template <class t>
class Queue
{
    stack<t> s1, s2;

public:
    void push(int data)
    {
        if (s1.empty())
            s1.push(data);
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(data);
            while (!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    void pop()
    {
        if (s1.empty())
        {
            cout << "Empty";
            return;
        }
        else
        {
            s1.pop();
        }
    }
    int front()
    {
        if (s1.empty())
        {
            cout << "Empty";
            return -1;
        }
        else
        {
            return s1.top();
        }
    }
    bool empty()
    {
        return s1.empty();
    }
};
void printQueue(Queue<int> Q)
{
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout<<"\n";
    return;
}

int main()
{
    Queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.push(6);
    cout<<"Front Element = "<<Q.front()<<endl;
    printQueue(Q);
    Q.pop();
    Q.pop();
    printQueue(Q);
    cout<<"Front Element = "<<Q.front()<<endl;
    return 0;
}