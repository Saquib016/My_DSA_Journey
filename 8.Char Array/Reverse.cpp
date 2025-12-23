#include <iostream>
#include <cstring>
using namespace std;
void reverse(char word[`], int n)
{
    int i = 0;
    int x = n - 1;
    while (i < x)
    {
        swap(word[i], word[x]);
        i++;
        x--;
    }
    cout << word;
}
int main()
{
    char str[50];
    cout << "Enter The Word = " << endl;
    cin.getline(str, 50);
    reverse(str, strlen(str));
    return 0;
}