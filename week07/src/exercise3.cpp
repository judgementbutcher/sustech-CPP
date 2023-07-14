#include<iostream>
#include<string>
using namespace std;

int sum = 0;


//这里的nint或者size_t都是可以的

bool vabs(int *p, int n)
{
    if(p == nullptr)
    {
        cerr << "数组为空" << endl;
        return 0;
    }
    for(int i = 0;i<n;i++)
    {
        sum += abs(p[i]);
    }
    return 1;
}

bool vabs(float*p, int n)
{
    if(p == nullptr)
    {
        cerr << "数组为空" << endl;
        return 0;
    }
    float sum = 0.0f;
    for(int i =0;i<n;i++)
    {
        sum += abs(p[i]);
    }
    return true;
}

bool vabs(double*p, int n)
{
    if(p == nullptr)
    {
        cerr << "数组为空" << endl;
        return 0;
    }
    double sum = 0.0;
    for(int i = 0;i<n;i++)
    {
        sum += abs(p[i]);
    }
    return 1;
}

int main()
{
    int *a = new int[5]{-123,-2345,-4,235,5};
    float* b = new float[5]{-123.5123f,-142.2f,123.02f,-4616.55f,11.0f};
    double* c = new double[5]{23.2,-5.2,-436.2,-54.14,516};

    if(vabs(a,5))
    {
        cout << sum  << endl;
    }
    return 0;

}


