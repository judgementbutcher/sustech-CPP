#include <iostream>
using namespace std;

union ipv4address
{
    uint32_t address32;
    uint8_t address8[4];
};

int main()
{
    cout << sizeof(ipv4address) << endl;

    ipv4address ip;
    ip.address8[0] = 127;
    ip.address8[1] = 0;
    ip.address8[2] = 0;
    ip.address8[3] = 1;

    for (int i = 0; i < 4; i++)
    {
        // 注意这里的八位存储结构，而整数int是32位
        cout << +ip.address8[i] << " ";
    }
    cout << endl;

    cout << ip.address32 << endl;
    return 0;
}