#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int m=0;
        int ans=0;
        while (n!=0)
        {
           m += n%3;
           ans += n/3;
           n/=3;
           if(n==0&&m>2){
            n = m;
            m = 0;
           }
           if(n==0&&m==2){
               ans++;
           }
        }
        cout<<ans<<endl;
         
    }
    
    return 0;
}