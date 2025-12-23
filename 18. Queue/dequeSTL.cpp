#include <iostream>
#include <deque>
using namespace std;
void printDeque(deque<int> d)
{
    while (!d.empty())
    {
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;
    return;
}
int main()
{
    deque<int> d;
    d.push_back(5);
    d.push_front(4);
    d.push_back(90);
    d.push_back(69);
    d.push_front(89);
    printDeque(d);
    d.pop_back();
    printDeque(d);
    d.pop_front();
    printDeque(d);
    cout << d.front() << endl;
    cout << d.back() << endl;
    return 0;
}