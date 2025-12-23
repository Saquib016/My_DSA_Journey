#include <iostream>
using namespace std;
int main()
{
    int student[2][3] = {{100, 100, 100},
                         {60, 50, 89}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << student[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout << student;
    return 0;
}