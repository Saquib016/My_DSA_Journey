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
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL && tail == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
};
void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val<<"->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
node *merge(node *head, node *r_h)
{
    node *i = head;
    node *j = r_h;
    list l2;
    while (i != NULL && j != NULL)
    {
        if (i->val <= j->val)
        {
            l2.push_back(i->val);
            i = i->next;
        }
        else
        {
            l2.push_back(j->val);
            j = j->next;
        }
    }
    while (i != NULL)
    {
        l2.push_back(i->val);
        i = i->next;
    }
    while (j != NULL)
    {
        l2.push_back(j->val);
        j = j->next;
    }

    return l2.head;
}
node *split_ll(node *head)
{
    node *slow = head;
    node *fast = head;
    node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
        prev->next = NULL;
    return slow;
}
node *merge_sort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *right_head = split_ll(head);
    node *left = merge_sort(head);
    node *right = merge_sort(right_head);
    return merge(left, right); // head of sorted ll
}
int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(2);
    ll.push_front(3);
    print_list(ll.head);
    ll.head=merge_sort(ll.head);
    print_list(ll.head);
}