#include <iostream>
using namespace std;
void decimaltobinary(int n){
   int i=0;
   int res=0;
   int rem;
   int pow=1;
    while (n>0)
    {
        rem=n%2;
        res=res+rem*pow;
        pow=pow*10;
       n= n/2;
       i++;
    }
    cout<<"The Binary Number is "<<res;
    
}
void clearbit(int n, int i)
{
    int ls = ~(1 << i);
    n = (n&ls);
    cout<<"the Decimal Number is "<<n<<endl;
    decimaltobinary(n);
}

int main()
{
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    int i;
    cout << "Enter the Position = ";
    cin >> i;
    clearbit(n, i);

    return 0;
}
