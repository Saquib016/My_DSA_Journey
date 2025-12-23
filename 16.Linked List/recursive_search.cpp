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
            head = tail = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void printl()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "null";
    }

    int recSearch(Node *temp, int key)
    {
        if (temp == NULL) // key not Exist
            return -1;
        if (temp->val == key)
            return 0;
        int idx = recSearch(temp->next, key);
        if (idx == -1) // if not then null nhii show karega
            return -1;
        return idx + 1;
    }
    int helper_Search(int key)
    {
        return recSearch(head, key); 
    }
};
int main()
{
    List ll; 
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    cout<<ll.helper_Search(5);
    return 0;
}