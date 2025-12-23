#include <iostream>
#include <cstring>
using namespace std;
void  ispalindrome(char word[], int n)
{
    int st = 0;
    int end = n - 1;
    int pal = 1;
    while (st < end)
    {
        if (word[st] != word[end])
        {
            pal = 0;
            break;
        }
        st++;
        end--;
    }
    if (pal == 1)
        cout << word << " is Palindrome." << endl;
    else
        cout << word << " is not Palindrome." << endl;
}
int main()
{
    char word[50];
    cout << "Enter Your Word = ";
    cin.getline(word, 50);
    ispalindrome(word, strlen(word));
    return 0;
}