#include <iostream>
#include <string>
using namespace std;

inline double fabs(double num){
    return num>0?num:-num;
}


int main()
{
    double num;
    cin >> num;

    double x = num;
    while (fabs(x * x *x - num)>1e-7)
    {
        x = (x*2+num/x/x)/3;
    }
    // cout << x;
    printf("%.1f",x);
    system("pause");
    return 0;
}