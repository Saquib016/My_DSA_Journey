#include <iostream>
using namespace std;
void factorial(int x)
{
    int prd = 1;
    for (int i = 1; i <= x; i++)
    {
        prd = prd * i;
    }
    cout << prd;
    return;
}
int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    factorial(n);
}
