#include <iostream>
#include <queue>
#include<vector>
using namespace std;
class Soldier{
    public:
    int count;
    int ind;
    Soldier(int count,int ind){
        this->ind = ind;
        this->count = count;
    }
    bool operator<(const Soldier & obj) const{
        if(this->count==obj.count) return this->ind>obj.ind;
        return this->count>obj.count;
    }
};
void weakSOL(vector<vector<int>> matrix,int k){
    vector<Soldier> row;
    for (int i = 0; i < matrix.size(); i++)
    {
        int count = 0;
        for (int j = 0; j<matrix[i].size() && matrix[i][j] == 1; j++)
        {
            count++;
            
        }
        row.push_back(Soldier(count,i));
    }
    priority_queue<Soldier> pq(row.begin(),row.end());
    for (int i = 0; i < k; i++)
    {
        cout<<"Row = "<<pq.top().ind<<endl;
        pq.pop();
    }
    
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 0}};
    weakSOL(matrix,2);
    return 0;
}