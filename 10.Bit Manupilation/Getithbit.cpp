#include <iostream>
using namespace std;
void getbit(int n, int i)
{
    int ls = (1 << i);
    if ((n & ls) > 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    int i;
    cout << "Enter the Position = ";
    cin >> i;
    getbit(n, i);

    return 0;
}
