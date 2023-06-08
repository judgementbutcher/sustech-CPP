#include <iostream>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter a string:";
    cin.getline(str, 20);
    cout << "You entered:" << str << endl;

    cout << "Enter an other string:";
    cin.get(str, 20);
    cout << "You entered: " << str << endl;
    return 0;
}