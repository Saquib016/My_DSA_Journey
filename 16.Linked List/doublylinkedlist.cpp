#include <iostream>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Double_L
{
    public:
    node *head;
    node *tail;
    Double_L()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void push_front(int val){
        node* newnode=new node( val);
        if(head==NULL) head=tail=newnode;
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
        return ;
    }
    void pop_front(){
        node* temp=head;
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    void print_list(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<=>";
            temp=temp->next;
        }
        cout<<"null\n";
    }
};
int main(){
    Double_L dl;
    dl.push_front(7);
    dl.push_front(8);
    dl.push_front(7);
    dl.push_front(8);
    dl.push_front(7);
    dl.push_front(8);
    dl.push_front(7);
    dl.push_front(8);
    dl.print_list();
    dl.pop_front();
    dl.print_list();

}