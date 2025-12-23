#include <iostream>
#include <vector>
using namespace std;
class Heap
{
    vector<int> vec;

    void heapify(int id)
    {
        if (id > vec.size())
        {
            return;
        }
        int l = 2 * id + 1;
        int r = 2 * id + 2;
        int maxid = id;
        if (l < vec.size() && vec[l] > vec[maxid])
        {
            maxid = l;
        }
        if (r < vec.size() && vec[r] > vec[maxid])
        {
            maxid = r;
        }
        swap(vec[maxid], vec[id]); // swap with parent
        if (maxid != id)
        { // i.e swap with child
            heapify(maxid);
        }
    }

public:
    void push(int val) // Insert Then Fix
    {
        vec.push_back(val); // Insert
        int chId = vec.size() - 1;
        int prId = (chId - 1) / 2;
        while (prId >= 0 && vec[chId] > vec[prId]) // Fix
        {
            swap(vec[chId], vec[prId]);
            chId = prId;
            prId = (chId - 1) / 2;
        }
        return;
    }
    void pop()
    {
        swap(vec[0], vec[vec.size() - 1]); // step 1
        vec.pop_back();                    // step 2
        heapify(0);                        // step 3
    }
    int top()
    {
        return vec[0];
    }
    bool empty()
    {
        return vec.size() == 0;
    }
};
void printHeap(Heap h){
    while (!h.empty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
}
int main()
{
    Heap h;
    h.push(9);
    h.push(4);
    h.push(8);
    h.push(1);
    h.push(2);
    h.push(5);
    cout << h.top()<<endl;
    h.pop();
    cout << h.top()<<endl;
    printHeap(h);
    cout<<endl<<h.top();
    return 0;
}