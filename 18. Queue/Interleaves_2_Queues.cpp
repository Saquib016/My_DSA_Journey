#include <iostream>
#include <queue>
using namespace std;
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
void interleaves(queue<int> &q)
{
    int n = q.size();
    queue<int> q2;
    for (int i = 0; i < (n / 2); i++)
    {
        q2.push(q.front());
        q.pop();
    }
    while (!q2.empty())
    {
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    int n;
    cout << "ENter the Size of the Queue = " << endl;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    interleaves(q);
    printQueue(q);
    return 0;
}