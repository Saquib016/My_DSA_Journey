#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
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
        node *newnode = new node(val);
        if (head == NULL)
            head = tail = newnode;
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void pop_front()
    {
        node *temp = head;
        if (head == NULL)
            return;
        else
        {
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
};
void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }
    cout << "NULL\n";
}
bool isCycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)  // if cycle there then null not exist if not there then exist.
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Exist\n";
            return true;
        }
        else
        {
            cout << "Not Exist"; //to count how many times 
        }
    }
    cout << "Not Exist";
    return false;
}
int main()
{
    list ll;
    ll.push_front(4);

    ll.push_front(3);

    ll.push_front(2);

    ll.push_front(1);
    ll.tail->next = ll.head;
    isCycle(ll.head);
}