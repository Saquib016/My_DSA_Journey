#include <iostream>
using namespace std;
int facto(int n)
{
    int prd = 1;
    for (int i = 1; i <= n; i++)
    {
        prd = prd * i;
    }
    return prd;
}
int binocoeff(int n, int r)
{
    int nCr;
    if (n > r)
    {
        nCr = facto(n) / (facto(r) * facto(n - r));
        return nCr;
    }
    else
        return 0;
}
int main()
{
    int n;
    cout << "Enter the n = " << endl;
    cin >> n;
    int r;
    cout << "Enter the r = " << endl;
    cin >> r;
    cout <<"The Value of "<<n<<"C"<<r<<"= "<< binocoeff(n, r);
}