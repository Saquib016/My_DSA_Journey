#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reversal(queue<int> &q)
{
    stack<int> s;
    int n = q.size();
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return;
}
void printQueue(queue<int> &Q)
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
    queue<int> q;
    int val;
    for (int i = 0; i < 5; i++)
    {
        cin >> val;
        q.push(val);
    }
    reversal(q);
    printQueue(q);
    return 0;
}