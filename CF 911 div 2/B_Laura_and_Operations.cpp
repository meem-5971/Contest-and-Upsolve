#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int x,y,z;
        cin>>x>>y>>z;
        if(abs(y-z)%2 ==0){
            cout<<1<<' ';
        }
        else{
            cout<<0<<' ';
        }
        if(abs(x-z)%2==0){
            cout<<1<<' ';
        }
        else{
            cout<<0<<' ';
        }
        if(abs(x-y)%2==0){
            cout<<1<<' '<<'\n';
        }
        else{
            cout<<0<<' '<<'\n';
        }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}