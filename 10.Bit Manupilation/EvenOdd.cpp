#include <iostream>
using namespace std;
void EvenOdd(int n)
{
    if ((n & 1) == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}
int main()
{
    EvenOdd(5);
    EvenOdd(6);
    return 0;
}
