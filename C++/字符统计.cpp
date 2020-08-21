#include <iostream>
#include <vector>
#include <string>
using namespace std;

inline int fineMax(vector<int> ans){

    int index = 0;
    for (size_t i = 0; i < ans.size(); i++)
    {
        if (ans[i]>0&&ans[i]>ans[index])
        {
            index = i;
        }
    }
    return index;
}


int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<int> ans(130);
        for (int i = 0; i < s.length(); i++)
        {
            ans[int(s[i])]++;
        }

        for (int i = 0; i < 67; ++i)
        {
            int a = fineMax(ans);
            ans[a] = 0;
            if(a>=30)cout<<char(a);
        }
        cout<<endl;
    };
    system("pause");
    return 0;
}