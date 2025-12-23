#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int size;
    cout<<"Enter the Size = "<<endl;
    cin>>size;
    vector<int> vec;
    cout << "Enter the Elements " << endl;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int k;
    cout << "Enter the Element Whose Sum is Needed = " << endl;
    cin >> k;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == k)
                cout << "[" << i << "," << j << "]"<<" ";
        }
    }
    return 0;
}