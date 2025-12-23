#include <iostream>
#include <string>
#include <stack>
using namespace std;
string reverse_strin(string &s)
{
    string ans;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        st.push(s[i]);
    }
    while (!st.empty())
    {
        char top = st.top();
        ans += top;
        st.pop();
    }
    return ans;
}
void print(stack<char> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return;
}
int main()
{
    string s;
    cout<<"Enter the String = "<<endl;
    cin>>s;
    cout << reverse_strin(s);
    return 0;
}