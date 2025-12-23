#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

public:
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;

public:
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
    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL&&tail==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void print_list(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"null";
    }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_back(9);
    ll.push_back(7);
    ll.print_list();
    return 0;
}