#include <iostream>
#include <string>
using namespace std;
void binstring(int n, string ans, int l)
{
    if (n == 0)
    {
        cout << ans<<endl;
        return;
    }

    if (l != 1)
    {
        binstring(n - 1, ans + "0", 0);
        binstring(n - 1, ans + "1", 1);
    }
    else
    {
        binstring(n - 1, ans + "0", 0);
    }
}
int main()
{
    int n;
    cout << "Enter the Size of the String = " << endl;
    cin>>n;
    string ans = "";
    binstring(n, ans, 0);
    return 0;
}
