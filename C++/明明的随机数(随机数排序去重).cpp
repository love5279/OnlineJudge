#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int m,l=0;
        vector<int> ans(n,-1);
        for(int i = 0; i < n; i++){
            cin>>m;
            if(i==0){
                ans[l++] = m;
                continue;
            } 
            bool flag = false;
            for(int j = 0; j < l; j++){
                if(m==ans[j]){
                    flag = true;
                    break;
                }
                if(m<ans[j]){
                    int temp = ans[j];
                    ans[j] = m;
                    m = temp;
                }
            }
            if(flag)continue;
            ans[l++] = m;
        }
        for(int i = 0; i < l; i++){
            cout<<ans[i]<<endl;
        }
    }
    
    return 0;
}