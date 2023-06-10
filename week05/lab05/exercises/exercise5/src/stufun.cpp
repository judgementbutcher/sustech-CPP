#include "stuinfo.hpp"

void inputstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "please input the name:";
        cin >> stu[i].name;
        cout << "input the scores of the three classes :";
        double sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> stu[i].score[j];
            sum += stu[i].score[j];
        }
        stu[i].ave = sum / 3;
    }
}

void showstu(stuinfo stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " name:" << stu[i].name << "each score: ";
        for (int j = 0; j < 3; j++)
        {
            cout << stu[i].score[j] << " ";
        }
        cout << "ave scores:" << stu[i].ave << endl;
    }
}