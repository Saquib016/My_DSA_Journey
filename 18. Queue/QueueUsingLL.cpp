#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }
    void push(int data)
    {
        Node *newnode = new Node(data);
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

        if (empty())
            cout << "Empty\n";
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int front()
    {
        if (empty())
        {
            cout << "Empty\n";
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    Queue Q;
    Q.push(3);
    Q.pop();
    Q.push(9);
    Q.push(4);
    Q.push(6);
    cout << Q.front();
    Q.push(4);
    Q.push(8);
    Q.push(2);
    Q.push(0);
    Q.push(1);
    Q.push(90);
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
}