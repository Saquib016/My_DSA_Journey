#include <iostream>
#include <stack>
using namespace std;
template <class t>
void pushAtBottom(stack<t> &s, t n)
{
    if (s.empty())
    {
        s.push(n);
        return;
    }
    t temp = s.top();
    s.pop();
    pushAtBottom(s, n);
    s.push(temp);
}
template <class T>
void printStack(stack<T> s) {   // pass by value (copy)
    if (s.empty()) return;
    cout << s.top() << " ";
    s.pop();
    printStack(s); // recursion
}
int main()
{
    stack<int> s;
    s.push(6);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(0);
    s.push(2);
    s.push(1);
    printStack(s);
    pushAtBottom(s, 9);
    cout << "\nNew\n";
    printStack(s);
    return 0;
} 