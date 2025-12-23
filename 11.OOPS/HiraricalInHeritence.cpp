#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eat\n";
    }
    void breathe()
    {
        cout << "Brethe\n";
    }
};
class Bird : public Animal
{
    public:
    void fly()
    {
        cout << "Fly\n";
    }
};
class fish : public Animal
{
    public:
    void swim()
    {
        cout << "Swim\n";
    }
};
class mammal : public Animal
{
    public:
    void walk()
    {
        cout << "Walk\n";
    }
    mammal()
    {
        cout << "mammal\n";
    }
};
int main()
{
    mammal m1;
    m1.walk();
    m1.eat();
    m1.breathe();
    return 0;
}

