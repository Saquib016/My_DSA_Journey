#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char str[50];
    cout << "Enter the Required Srtring = ";
    cin.getline(str, 50);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            char pos = 'A' + (str[i] - 'a');
            str[i] = pos;
        }
    }
    cout << "The Required Word is = " << str;
    return 0;
}