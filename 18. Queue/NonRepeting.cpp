#include <iostream>
#include <string>
#include <queue>
#include <array>
using namespace std;
void nonrepeting(string &str)
{
    int freq[26] = {0};
    queue<char> q;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch - 'a']++;
        while (!q.empty() && freq[q.front()-'a'] > 1)
        {
            q.pop();
        }
        if (q.empty())
            cout<<"-1\n";
        else
        {
            cout << q.front()<<endl;
        }
    }
}
int main()
{
    string str;
    cout << "Enter the String = " << endl;
    cin >> str;
    nonrepeting(str);
    return 0;
}