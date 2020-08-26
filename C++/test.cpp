#include <iostream>
#include <map>
#include <vector>
using namespace std;

// inline int getPow(vector<int> v,int index){
//     if(index<v.size()){
//         return v[index];
//     }
//     v[index] =
// }

inline int pow(int x, int y){
    if(y==1||y==0)return 1;
    for(int i=1;i<y;i++){
        x*=x;
    }
    return x;
}

int main()
{
    map<char, int> m = {
        {'0', 0},
        {'1', 1},
        {'2', 2},
        {'3', 3},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 7},
        {'8', 8},
        {'9', 9},
        {'A', 10},
        {'B', 11},
        {'C', 12},
        {'D', 13},
        {'E', 14},
        {'F', 15},
    };

    vector<int> v(100, -1);

    string s;
    while (cin >> s)
    {
        int ans = 0, j = 0;
        for (size_t i = s.length() - 1; i > 2; i--)
        {
            ans += m[s[i]] * pow(16, j);
        }

        cout << ans << endl;
    }
    return 0;
}