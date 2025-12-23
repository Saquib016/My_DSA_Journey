#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void complexnum()
    {
        cout << real << "-" << "(" << img << ")" << "i" << endl;
    }
    complex operator-(complex &c2)
    {
        int realres = this->real - c2.real;
        int realimg = this->img - c2.img;
        complex c3(realres, realimg);
        return c3;
    }
};
int main()
{
    complex c1(3, 2);
    complex c2(5, 9);
    complex c3 = c1 - c2;
    c3.complexnum();
    return 0;
}
