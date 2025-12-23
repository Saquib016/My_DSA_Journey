#include<iostream>
using namespace std;
int main() {
int x=10; int y=20;
int *ptr1=&x;
int *ptr2=&y;
 ptr2=ptr1; //now ptr1==ptr2==&a;
 cout<<ptr2<<"  "<<ptr1<<"  "<<&x<<endl;
return 0;
}
