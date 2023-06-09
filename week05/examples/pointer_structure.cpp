#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male;
};

int main()
{

    Student stu = {"Yu", 2000, true};
    Student *pStu = &stu;
    strncpy(pStu->name, "Li", 4);
    pStu->born = 2001;
    (*pStu).born = 2002;
    pStu->male = false;

    printf("Address of stu: %p\n", pStu);       // C style
    cout << "Address of stu: " << pStu << endl; // C++ style
    cout << "Address of stu: " << &stu << endl;
    cout << "Address of member name: " << &(pStu->name) << endl;
    cout << "Address of member born: " << &(pStu->born) << endl;
    cout << "Address of member male: " << &(pStu->male) << endl;

    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;

    return 0;
}
