#include <vector>
#include <iostream>

using namespace std;
inline int max(int a, int b){
    return a>b?a:b;
}


int main(){
    int N;
    int m;
    while(cin>>N>>m){
        vector<int> v(m+1),p(m+1),q(m+1);
        vector<int> ans(N+1);
        for(int i = 1; i <= m; ++i){
            cin>>v[i]>>p[i]>>q[i];
        }
        
        for(int i = 1; i <= m; ++i){
            for(int j = N; j >= 1; --j){
                if( v[i]+v[q[i]] >j){
                   
                }else{
                    ans[j] = max(ans[j - (v[i]) ]+v[i]*p[i],ans[j]);
                }
            }
        }
        
        cout<<ans[N];
        
    }


    system("pause");
    return 0;
}