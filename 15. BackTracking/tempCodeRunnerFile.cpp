#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printsub(string str, string substr)
{
    char ch = str[0];
    if (str.size == 0)
    {
        cout << substr;
        return;
    }
    printSub(str.substr(1, str.size() - 1), substr + ch);
    printSub(str.substr(1, str.size() - 1), substr);
}
int main()
{
    string str;
    cout << "Enter The String = " << endl;
    cin >> str;
    string sub = "";
    printsub(str, sub);
    return 0;
}
