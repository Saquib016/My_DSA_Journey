#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "~Node "<<val<<" , ";
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List()
    {
        cout << "~List" <<" , ";
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "null"<<endl;
    }
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};
int main()
{
    List ll;
    ll.push_back(5);
    ll.push_back(8);
    ll.push_front(9);
    ll.push_front(510);
    ll.push_back(89);
    ll.push_back(569);
    ll.push_front(999);
    ll.push_back(700);
    ll.print_list();
    return 0;
}