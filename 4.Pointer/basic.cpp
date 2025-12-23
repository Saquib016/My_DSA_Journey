#include<iostream>
using namespace std;
int main() {
int a=10;
cout<<&a << "=  ";
int*ptr=&a;
cout<< ptr <<" ";
int**pptr=&ptr;
cout<<pptr<<"\n";
cout<<**pptr<<"  "<<*ptr<<"  "<<*&a<<" ";
*ptr=20;
cout<<a;
return 0;
}
