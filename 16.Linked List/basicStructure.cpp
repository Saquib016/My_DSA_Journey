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
        next = NULL;
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
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insert(int val,int pos){
        Node* temp=head;
        Node* newNode=new Node(val);
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Not valid postion"<<endl;
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void print_List()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout<<"null";
    }


};
int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(9);
    ll.push_back(7);
    ll.push_back(69);
    ll.insert(100,25);
    ll.print_List();
    return 0;
}