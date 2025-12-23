#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class List
{
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }
    void pushback(int data)
    {
        Node *curr = new Node(data);
    }
};
int main()
{

    return 0;
}