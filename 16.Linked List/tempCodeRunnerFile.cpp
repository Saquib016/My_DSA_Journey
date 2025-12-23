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
    void pop_front()
    {
        cout << head->val << " is poped. Now Elements left = "<<endl;
        if(head==NULL){
            cout<<"Linked List Is Empty. "<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout<<"null"<<endl;
    }
};

int main()
{
    List ll;
    ll.push_front(99);
    ll.push_front(89);
    ll.push_front(9);
    ll.push_front(510);
    ll.print_list();
    ll.pop_front();
  ll.print_list();
}
