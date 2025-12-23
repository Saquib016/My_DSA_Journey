#include <iostream>
#include <string>
#include <cstring>
using namespace std;
bool validpalindrome(char arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    char str[50];
    cout << "Enter the Required Srtring = ";
    cin.getline(str, 50);
    cout << validpalindrome(str, strlen(str)) << endl;
    return 0;
}