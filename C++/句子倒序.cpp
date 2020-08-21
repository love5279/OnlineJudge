#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int l = s.length() - 1, j, k;
    for (int i = l; i >= 0; --i)
    {
        if (s[i] == ' ')
        {
            k = l;
            for (j = i + 1; j <= k; ++j)
            {
                cout << s[j];
            }
            cout << ' ';
            l = i - 1;
        }
        if (i == 0)
        {
            for (j = i; j <= l; ++j)
            {
                cout << s[j];
            }
        }
    }
    system("pause");
    return 0;
}