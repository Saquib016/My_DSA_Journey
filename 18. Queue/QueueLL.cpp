#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printQueue(int head)
{
}
class Queue
{
    node *head;
    node *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int data)
    {

        node *newnode = new node(data);
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
    void pop()
    {
        if (isempty())
            cout << "Already Empty";
        node *temp = head;

        head = head->next;
        delete temp;
    }
    int front()
    {
        if (isempty())
        {
            cout << "Empty";
            return -1;
        }
        return head->data;
    }
    bool isempty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue Q;
    Q.push(3);
    Q.push(9);
    Q.push(4);
    Q.push(6);
    Q.push(4);
    Q.push(8);
    Q.push(2);
    Q.push(0);
    Q.push(1);
    Q.push(90);
    while (!Q.isempty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    return 0;
}