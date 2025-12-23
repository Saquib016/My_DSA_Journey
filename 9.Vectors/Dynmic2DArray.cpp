#include<iostream>
using namespace std;
int main() {
    int rows,cols;
cout<<"enter the no. of Rows = ";
cin>>rows;
cout<<"enter the no. of Col. = ";
cin>>cols;
int* *matrix = new int*[rows];
for(int i=0;i<rows;i++){
    matrix[i]=new int [cols];
} 
//data store 
int x=2;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        matrix[i][j]=x++;
        cout<<matrix[i][j]<<" ";

    }
    cout<<"\n";
}
return 0;
}
