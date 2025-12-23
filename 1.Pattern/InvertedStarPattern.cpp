#include<iostream>
using namespace std;
int main() {
 int n;
    cout << "Enter Number of Stars in rows and columns = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n+1)-i; j++)
        {

            cout << " * " << " ";
        }
        cout << endl;
    }
return 0;
}
