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
    cout<<"After removal of Cycle Linked List is\n";
    while (temp != NULL)
    {
        cout << temp->val<<"->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void removing_cycle(node *head)
{
    node *slow = head;
    node *fast = head;
    bool isCycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle Exist..  \n";
            isCycle = true;
            break;
        }
    }

    if (isCycle)
    {
        slow = head;
        node *prev;
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            while (slow != fast)
            {
                prev=fast;
                fast = fast->next;
                slow = slow->next;
            }
            prev->next = NULL;
            return;
        }
    }
    else 
    {
        cout << "Cycle Not Exist";
        return;
    }
}
int main()
{
    list ll;
    ll.push_front(4);

    ll.push_front(3);

    ll.push_front(2);

    ll.push_front(1);
    ll.tail->next = ll.head;
    removing_cycle(ll.head);
    print_list(ll.head); 
}