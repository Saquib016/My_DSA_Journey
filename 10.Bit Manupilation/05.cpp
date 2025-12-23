#include <iostream>
#include <vector>
using namespace std;
int power2(int n)
{
   if((n&(n-1))==0) cout<<n<<" is the power of 2"<<endl;
   else cout<<n<<" is not the power of 2"<<endl;
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    power2(n ); 
}