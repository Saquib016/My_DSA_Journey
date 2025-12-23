#include <iostream>
#include <string>
using namespace std;
void isAnagram(string str1, string str2)
{
    if (str1.length() == str2.length())
    {
        int count[26] = {0};
        for (int i = 0; i < str1.length(); i++)
        {
            int ch1 = str1[i] - 'a';
            int ch2 = str2[i] - 'a';
            count[ch1]++;
            count[ch2]--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                cout << "Not Valid Anagram";
                return;
            }
        }
        return;
    }
    else
    {
        cout << "Not A Valid Anagram";
        return;
    }
}
int main()
{
    string str1, str2;
    cout << "Enter the String 1 = ";
    getline(cin, str1);
    cout << "Enter the String 2 = ";
    getline(cin, str2);
    isAnagram(str1, str2);
    return 0;
}