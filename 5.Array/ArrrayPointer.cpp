#include <iostream>
using namespace std;
int main()
{
    int x=23;
    int *ptr=&x;
    cout<<ptr<<endl;
    int y=10;
    ptr=&y;
    cout<<*ptr<<endl;
    int arr[5];
    
    cout<<arr;



    // arr=&y; Not Valid
    // cout<<arr;

    
    return 0;
}