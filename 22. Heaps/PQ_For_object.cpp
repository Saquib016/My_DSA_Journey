#include <iostream>
#include <string>
#include <queue>
using namespace std;
class Student
{
public:
    int marks;
    string name;
    Student(string name,int marks){
        this->marks = marks;
        this->name = name;
    }
    bool operator < (const Student &obj) const{
        return this->marks<obj.marks;
    }
};
int main(){
    priority_queue<Student> pq;
    pq.push(Student("aman",50));
    pq.push(Student("bhumika",90));
    pq.push(Student("akbar",70));pq.push(Student("shubham",95));
    while (!pq.empty())
    {
        cout<<"TOP = "<<pq.top().name<<" , "<<pq.top().marks<<endl;
        pq.pop();
    }
    
 return 0;   
}