#include<iostream>
#include<string>
using namespace std;


class Complex
{
private:
    double realPart;
    double vaniPart;
public:
    Complex() = default;
    Complex(double real, double vani):realPart(real),vaniPart(vani){};
    ~Complex() = default;
    void add(const Complex & rhs);
    void substract(const Complex& rhs);
    void display()const;
};

void Complex::add(const Complex & rhs)
{
    this->realPart += rhs.realPart;
    this->vaniPart += rhs.vaniPart;
}

void Complex::substract(const Complex & rhs)
{
    this->realPart -= rhs.realPart;
    this->vaniPart -= rhs.vaniPart;
}

void Complex::display()const
{
    //如果实部为0，那么不输出
    if(realPart == 0)
    {
        //如果是1或-1的话就不再输出数字
        if(vaniPart == 0)
        {
            cout << 0;
        }
        if(vaniPart == 1)
        {
            cout << "i" << endl;
        }
        else if(vaniPart == -1)
        {
            cout << "-i" << endl;
        }
        else
        {
            cout << vaniPart << "i" << endl;
        }
    }
    //如果实部不为0，那么就需要输出实部
    else
    {
        cout << realPart;
        //然后需要判断虚部的情况，此时虚部为正的话前面还需要
        if(vaniPart > 0)
        {
            cout << "+" << vaniPart << "i" << endl;
        }
        else if(vaniPart < 0)
        {
            cout << vaniPart << "i" << endl;
        }
        
    }
    
}

int main()
{
    Complex a(1,2);
    Complex b(24,5);
    a.display();
    a.add(b);
    a.display();
    b.display();
    b.substract(a);
    b.display();

    return 0;
}



