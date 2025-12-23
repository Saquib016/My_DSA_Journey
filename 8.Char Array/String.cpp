#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[100];
    char str2[100]=" Saquib";
    strcpy(str1,"apna college");
    cout<<strcmp(str1,str2)<<endl;

    strcat(str1,str2);
    cout<<str1;
return 0;
}
