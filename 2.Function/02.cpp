#include <iostream>
using namespace std;
void evenodd(int x)
{
    if (x % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    evenodd(n);
    return 0;
}