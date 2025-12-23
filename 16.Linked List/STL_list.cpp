#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void printlist(list<int> ll)
{
    list<int>::iterator itr;
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << (*itr) << "->";
    }
    cout <<"NULL"<< endl;
}

int main()
{
    list<int> ll;
    list<int>::iterator itr;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    printlist(ll);
    ll.push_back(77);
    ll.push_back(88);
    printlist(ll);
    ll.pop_back();
    ll.pop_front();
    printlist(ll);
    cout<<ll.size()<<endl;
    cout<<"head = "<<ll.front()<<" tail = "<<ll.back()<<endl;
    return 0;
}