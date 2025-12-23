#include <iostream>
#include <math.h>
using namespace std;
char alpha(char ch)
{
    if(ch>='z') return 'a';
    return ch+1;

    
}
int main()
{
    char a;
    cout << "Enter an Alphabet = " << endl;
    cin >> a;
    cout<<"The Alphabet Comes After "<<a<<" is "<<alpha(a)<<endl;
}
