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
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "The Maximum Number from the Array is " <<max<<endl ;
    cout << "The Minimum Number from the Array is " << min;

    return 0;
}