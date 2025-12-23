#include <iostream>
#include <deque>
using namespace std;
class Stack
{
    deque<int> q;

public:
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_back();
    }
    int top()
    {
        return q.back();
    }
    bool empty()
    {
        return q.empty();
    }
};
void printQueue(Stack Q)
{
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << "\n";
    return;
}
int main()
{
    Stack Q;
    Q.push(7);
    Q.push(8);
    Q.push(99);
    Q.push(3);
    Q.push(9);
    Q.push(4);
    Q.push(6);
    Q.pop();
    printQueue(Q);
    return 0;
}