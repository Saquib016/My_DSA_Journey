#include <iostream>
#include <string>
void isAnagram(string str1, string str2, int n, int m)
{
    //using Sort Karna 
    sort(str)
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (str1[i] != str2[j])
            {
                cout << "This is Not Anagram " << endl;
                return false;
            }
            else
            {
                cout << "This Is Anagram ";
                return true;
            }
        }
    }
}
using namespace std;
int main()
{
    string str1, str2;

    cout << "Enter the st Word = ";
    getline(cin, str1);
    cout << "Enter the 2nd Word = ";
    getline(cin, str2);
    isAnagram(str1, str2, str1.len(), str2.len());
    cout << return 0;
}
