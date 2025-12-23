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
    node *head = NULL;
    node *tail = NULL;
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void print_list()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};
node *revers(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
node *split_mid(node *head)
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
node *zigzag(node *head)
{
    node *righthead = split_mid(head);
    node *rightheadrev = revers(righthead);
    node *left = head;
    node *right = rightheadrev;
    node *tail = right;
    while (left != NULL && right != NULL)
    {
        node *nextleft = left->next;
        node *nextright = right->next;
        left->next = right;
        right->next = nextleft;
        tail = right;
        left = nextleft;
        right = nextright;
    }
    if (right != NULL)
    {
        tail->next = right;
    }
    return head;
}
int main()
{
    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print_list();
    ll.head = zigzag(ll.head);
    ll.print_list();
    return 0;
}