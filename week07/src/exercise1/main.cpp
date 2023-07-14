#include"match.h"

int main()
{
    char *s = new char[100];
    char ch;
    cout << "Please input a string: ";
    scanf("%[^\n]",s);
    cout << "Please input a character: ";
    cin >> ch;
    const char *p = match(s,ch);
    if(p == nullptr)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        for(int i = 0;p[i] != '\0';i++)
        {
            cout << p[i];
        }
        cout << endl;
    }
    delete s;
    return 0;
}