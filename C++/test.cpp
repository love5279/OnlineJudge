#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int  n;
    while (cin >> n)
    {
         int count=0;
         for (int i = 0; i < n; i++)
         {
             if (i & (i * i) == i)
             {
                 count++;
             }
         }

        cout<<count<<endl;
    }
    system("pause");
    return 0;
}