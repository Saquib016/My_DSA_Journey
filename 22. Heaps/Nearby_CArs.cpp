#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Car{
    public:
    int idx;
    int distsq;
    Car(int idx,int distsq){
        this->idx = idx;
        this->distsq = distsq;
    }
    bool operator < (const Car &ob) const{
        return this->distsq>ob.distsq;
    }
};
void nearbyCars(vector<pair<int,int>> pos,int k){
    vector<Car> cars;
    for (int i = 0; i <pos.size(); i++)
    {
        int distsq  = (pos[i].first*pos[i].first)+(pos[i].second*pos[i].second);
        cars.push_back(Car(i,distsq));
    }
    priority_queue<Car> pq(cars.begin(),cars.end()); //to provide the values in pq with good complexity
    for (int i = 0; i < k; i++)
    {
        cout<<"car "<<pq.top().idx<<endl;
        pq.pop();
    }
    
    
}
int main(){
    vector<pair<int,int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));
    int k=2;
    nearbyCars(pos,k);
    return 0;
}