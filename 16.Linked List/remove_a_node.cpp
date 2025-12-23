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
    void remove_nth_term(int n)
    {
        node *temp = head;
        int size = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        node *prev = head;
        for (int i = 1; i < (size - n); i++)
        {
            prev = prev->next;
        }
        prev->next = prev->next->next;
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
    ll.remove_nth_term(3);
    ll.print_list();
    return 0;
}