#include <iostream>
using namespace std;
class Queue
{
    int *arr; // dynamic array fixd to hai but pass throgh the queue the size of the array
    int cap;
    int curr;
    int f, r;

public:
    Queue(int cap)
    {
        this->cap = cap;
        arr = new int(cap);
        curr = 0;

        f = 0;
        r = -1;
    }
    void push(int data)
    {
        if (curr == cap)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        curr++;
    }
    void pop()
    {
        if (empty())
        {
            cout << "Empty";
            return;
        }
        f = (f + 1) % cap;
        curr--;
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return curr == 0;
    }
};
int main()
{
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.push(5);
    cout << q.front() << endl;
    return 0;
}