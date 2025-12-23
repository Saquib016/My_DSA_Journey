#include <iostream>
#include <string>
using namespace std;
void subsets(string stri, string substring)
{
    if (stri.size() == 0)
    {
        cout << substring <<endl;
        return;
    }
    char ch = stri[0];
    subsets(stri.substr(1), substring + ch);
    subsets(stri.substr(1), substring);
}
int main()
{
    string n;
    cout << "Enter the String" << endl;
    cin >> n;
    string substring = "";
    subsets(n, substring);
    return 0;
}