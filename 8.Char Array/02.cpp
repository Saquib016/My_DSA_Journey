#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void reverse(char arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<arr<<endl;
}
int main()
{
    char str[100];
    cout << "Enter the Required Srtring = "<<endl;
    cin.getline(str, 50);
    reverse(str,strlen(str));
    return 0;
}