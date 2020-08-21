#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        int n, m;
        vector<int> arr;
        vector<int>::iterator it;

        for (int i = 0; i < N; ++i)
        {
            cin >> n;
            if (i == 0)
            {
                arr.push_back(n);
                continue;
            }
            bool tag = true;
            for (it = arr.begin(); it != arr.end(); it++)
            {
                if (*it > n)
                {
                    arr.insert(it, n);
                    tag = false;
                    break;
                }
            }
            if (tag)
                arr.push_back(n);
        }

        cin >> m;
        if (m ==0)
        {
            for (it = arr.begin(); it != arr.end(); ++it)
            {
                cout << *it;
                if (it + 1 != arr.end())
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            for (it = arr.end()-1; it != arr.begin()-1; --it)
            {
                cout << *it;
                if (it - 1 != arr.begin()-1)
                {
                    cout << " ";
                }
            }
            cout << endl;

        }
    };
    system("pause");
    return 0;
}