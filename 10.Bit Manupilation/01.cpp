#include <iostream>
#include <vector>
using namespace std;
void evenodd(int n)
{
    if ((n & 1) == 0)
        cout << "Even ";
    else if (n & 1 == 1)
        cout << "ODD";
}
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    evenodd(n);
    return 0;
}