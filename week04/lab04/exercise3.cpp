#include <iostream>
using namespace std;

enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wedesday,
    Thursday,
    Friday,
    Saturday
};

enum Weather
{
    Sunny,
    rainy,
    cloudy
};

struct Dayinfo
{
    enum Day date;
    enum Weather condition;
    bool canTravel() const
    {
        if ((date == Sunday || Saturday) && condition == Sunny)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Dayinfo ddy;
    ddy.date = Sunday;
    ddy.condition = Sunny;
    if (ddy.canTravel())
    {
        cout << "it's ok to travel this day" << endl;
    }
    else
    {
        cout << "oops! that's will not be a good choice" << endl;
    }
    return 0;
}