#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int brr[n];
    for (int i = 0; i <n; i++)
    {
        brr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = brr[i];
    }
    cout << "ORG"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    cout << "COPY"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */

        cout << brr[i] << endl;
    }

    return 0;
}