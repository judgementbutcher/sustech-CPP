#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct stuinfo{
    string name;
    int age;
};


template<typename T>
int Compare(const T&a, const T&b)
{
    if(a > b)return 1;
    else if(a == b)return 0;
    else
        return -1;
}

template<>
int Compare(const stuinfo& a, const stuinfo& b)
{
    if(a.age > b.age)return 1;
    else if(a.age == b.age)return 0;
    else
        return -1;
}

int main()
{
    int ans = 0;
    stuinfo a{"爱神的箭噶",123};
    stuinfo b{"fuskdng",124};
    ans = Compare(a,b);
    cout << "Compare of the two intergers:" << ans << endl;
    return 0; 
}
