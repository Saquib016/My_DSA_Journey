// Important Rotated Array
#include <iostream>
using namespace std;

int search(int arr[], int s, int e, int t)
{
    if (s > e)
        return -1;
    int mid = s + ((e - s) / 2);
    if (arr[mid] == t)
    {
        cout << "index = ";
        return mid;
    }
    // Left Half Is Sorted
    if (arr[s] <= arr[mid])
    {
        if (arr[s] <= t && t < arr[mid])
            return search(arr, s, mid - 1, t);
        else
            return search(arr, mid + 1, e, t);
    }
    // Right Half IS sorted
    else
    {

        if (arr[mid] < t && t <= arr[e])
            return search(arr, mid - 1, e, t);
        else
            return search(arr, s, mid - 1, t);
    }
}
int main()
{
    int n;
    cout << "Enter the Number = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << search(arr, 0, n - 1, 0);
    return 0;
}
left side is sorted in the loop  of the things of the sisxty bit in the system of the singer of the things
ghost in the system in the boot his himself of the things the grasp of the things in thememory of the things thins in the hoop in the help for the shop of the things in the memoriesl of the 