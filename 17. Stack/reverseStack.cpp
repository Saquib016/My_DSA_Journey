#include <iostream>
#include <stack>
using namespace std;
template <class t>
void insert_bottom(stack<t> &s, t x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    t temp = s.top();
    s.pop();
    insert_bottom(s, x);
    s.push(temp);
}
template <class t>
void reverse_stack(stack<t> &s)
{
    if (s.empty())
        return;
    t x = s.top();
    s.pop();
    reverse_stack(s);
    insert_bottom(s, x);
}
template <class T>
void printStack(stack<T> s)
{ // pass by value (copy)
    if (s.empty())
        return;
    cout << s.top() << " ";
    s.pop();
    printStack(s); // recursion
}
int main()
{
    stack<int> s;
    s.push(7);
    s.push(8);
    s.push(6);
    s.push(7);
    s.push(5);
    s.push(6);
    s.push(6);
    s.push(5);
    s.push(6);
    s.push(1);
    s.push(5);
    s.push(9);
    s.push(1);
    s.push(2);
    s.push(3);
    printStack(s);
    reverse_stack(s);
    cout << "\nREVERSED STACK\n";
    printStack(s); 
    return 0;
}