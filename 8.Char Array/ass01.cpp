#include<iostream>
using namespace std;

int count(string str){
    int idx=0;
    for(char ch: str){
        if(ch>='a' && ch<='z') idx++;
    }
    return idx;
}
int main()
{
    string str1;
    cout << "Enter the 1st Srtring = ";
    getline(cin, str1);
    cout << count(str1) << endl;
    return 0;
}