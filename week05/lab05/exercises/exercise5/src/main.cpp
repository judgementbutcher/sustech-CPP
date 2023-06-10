#include "stuinfo.hpp"

int main()
{
    stuinfo stu[5];
    int n;
    cout << "how many students? " << endl;
    cin >> n;
    inputstu(stu, n);
    showstu(stu, n);
    cout << endl;
    return 0;
}