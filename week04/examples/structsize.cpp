#include <iostream>
using namespace std;

struct Student1
{
    int id;
    bool male;
    char label;
    float weight;
};

struct Student2
{
    int id;
    bool male;
    float weight;
    char label;
};

int main()
{
    cout << sizeof(Student1) << endl;
    cout << sizeof(Student2) << endl;
    return 0;
}