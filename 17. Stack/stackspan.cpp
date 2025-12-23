#include <iostream>
#include <stack>
using namespace std;
template <class t>
void stockspan(vector<int> stock, vector<int> span)
{
    stack<int> s;
    s.push(0);
    span[0] = 1;
    for (int i = 1; i < stock.size(); i++)
    {
        int current = stock[i];
        while (!s.empty() && currrent >= stock[s.top()])
        {
            s.pop();
            if (s.empty())
            {
            }
        }
    }
}
int main()
{
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span = {0, 0, 0, 0, 0, 0, 0};
    stockspan(stock, span);
    return 0;
}