#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void shownum()
    {
        cout << real << "+" << "(" << img << ")" <<"i"<< endl;
    }
    complex operator-(complex &c)
    {
        int resreal = this->real - c.real;
        int resimg = this->img - c.img;
        complex c2(resreal, resimg);
        return c2;
    }
};
int main()
{
    complex c1(5, 9);
    complex c2(3, 5);
    c1.shownum();
    c2.shownum();
    (c1 - c2).shownum();
    return 0;
}
