#include <iostream>
#include <deque>
using namespace std;
class Queue
{
    deque<int> q;

public:
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_front();
    }
    int front()
    {
        return q.front();
    }
    bool empty()
    {
        return q.empty();
    }
};
void printQueue(Queue Q)
{
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();   
    }
    cout << "\n";
    return;
}
int main()
{
    Queue Q;
    Q.push(7);
    Q.push(8);
    Q.push(99);
    Q.push(3);
    Q.pop();
    Q.push(9);
    Q.push(4);
    Q.push(6);
    printQueue(Q);
    return 0;
}