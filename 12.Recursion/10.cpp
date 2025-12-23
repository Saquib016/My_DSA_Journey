#include <iostream>
#include <string>
using namespace std;
void dupl(string str, string ans, int i, bool map[26])
{
    if (i == str.size())
    {
        cout << ans;
        return;
    }
    int x = (int)(str[i] - 'a');
    if (map[x] == true)
    {
        dupl(str, ans, i + 1, map);
    }
    else
    {
        map[x] = true;
        dupl(str, ans + str[i], i + 1, map);
    }
}
int main()
{
    string s;
    cout << "enter the String = " << endl;
    cin >> s;
    bool map[26] = {false};
    string ans = "";
    dupl(s, ans, 0, map);
    return 0;
}
