#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};
class list
{
public:
    node *head;
    node *tail;
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void reverse_list()
    {
        node *prev = NULL;
        node *curr = head;
        while (curr != NULL)
        {
            node *next = curr->next;
            curr->next = prev;
            //updation for the next itr
            prev = curr;
            curr = next;
        }
        head=prev;
    }
    void print_list()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "null"<<endl;
    }
};
int main()
{
    list ll;
    ll.push_front(99);
    ll.push_front(9);
    ll.push_back(5);
    ll.push_back(8);
    ll.push_front(9);
    ll.push_front(510);
    ll.push_back(89);
    ll.push_back(569);
    ll.push_front(999);
    ll.push_back(700);
    ll.print_list();
    ll.reverse_list();
    ll.print_list();
    return 0;
}