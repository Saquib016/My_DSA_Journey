// Friends Pairing Problem
#include <iostream>
using namespace std;
int friendpair(int n)
{
    if (n == 1 || n == 2)
        return n;
    return friendpair(n - 1) + ((n - 1) * friendpair(n - 2));
}
int main()
{
    int n;
    cout << "Enter the Number of People There = " << endl;
    cin >> n;
    cout << friendpair(n);
    return 0;
}
