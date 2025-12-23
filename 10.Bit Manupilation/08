#include <iostream>
#include <vector>
using namespace std;
int countset(int n)
{
    int count=0;
   while(n>0){
    count+=(n&1);
    n=n>>1;
   }
   return count;
}
int main()
{
    int n;
    cout << "Enter the number = " << endl;
    cin >> n;
    cout<<countset(n); 
}