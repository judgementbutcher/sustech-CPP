#include <iostream>
using namespace std;

class ConstMember
{
private:
    const int m_a;
public:
    ConstMember(int a) : m_a(a) {}
    void display() const
    {
    cout << "The value of the const member variable m_a is: " << m_a << endl;
    }
};

//因为前面设置m_a为常量，所以不能通过默认生成的赋值运算符去修改，如果要进行这样的赋值的话
//那么就需要把前面的const去掉
int main() 
{
    ConstMember o1{666};
    ConstMember o2{42};
    o1.display();
    o2.display();
    // o1 = o2;
    return 0;
}
