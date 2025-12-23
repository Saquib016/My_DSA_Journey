#include <iostream>
using namespace std;
int main()
{
    char word[50];
    cout << "Enter Your Word = ";
    cin.getline(word, 50);
    cout << "Your Word is = " << word << "\n";
    int pos;
    int i = 0;
    while (word[i] != '\0')
    {
        // if (int(word[i]) >= 97 && int(word[i]) <= 122)
        // {
        //     word[i] = (int(word[i]) - 'a') + 'A';
        // }


                   // Or
        if (word[i]>='a' && word[i]<='z')
        {
            word[i]=((int(word[i])-'a')+'A');
        }
        
        i++;
    }
    cout << word << endl;
    return 0;
}