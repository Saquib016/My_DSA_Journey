#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSub(string str, string substr)
{
    if (str.size() == 0)
    {
        cout <<substr<<endl;
        return;
    }
    char ch = str[0];
    printSub(str.substr(1, str.size() - 1), substr + ch);
    printSub(str.substr(1, str.size() - 1), substr);
}
int main()
{
    string str;
    cout << "Enter The String = " << endl;
    cin >> str;
    string sub = "";
    printSub(str, sub);
    return 0;
}
