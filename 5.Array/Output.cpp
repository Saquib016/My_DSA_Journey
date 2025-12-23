#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 9, 64};
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        cout <<"  "<<arr[i];
    }

    return 0;
}