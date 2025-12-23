#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(20,-3);
    vector<int> vec2={2,3,5,7};
    cout << vec.size() << "\n";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
