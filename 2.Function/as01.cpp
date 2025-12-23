#include <iostream>
#include <math.h>
using namespace std;
int digit(int n)
{
    int i = 0;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}
int palin(int n)
{
    int temp1;
    int temp2;
    int x = n;
    bool a;
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        a = false;
        temp1 = n % 10;
        n = n / 10;
        temp2 = (int(x / pow(10, digit(x) - i))) % 10;
        if (temp1 == temp2)
            a = true;
    }
    if (a)
        cout << "Palindrome";
    else
        cout << "Not a Palindrome ";
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    palin(n);
}
