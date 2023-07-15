#include <iostream>
using namespace std;


class Demo 
{
public :
    static int num;
    static void display() 
    {
        cout << "The value of the static member variable num is: " << num <<endl;
    }
};


//静态成员必须在类外部进行初始化
int Demo::num = 0;

//如果需要通过类来访问函数，那么该函数必须声明为静态函数
//否则只能通过具体的类对象来访问
int main() 
{
    Demo obj;
    obj.display();
    Demo::display();
    return 0;
}
