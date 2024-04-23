#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cout<<i<<' ';
    }
    ll x=k+2;
    while(x<=n){
        cout<<x<<' ';
        x+=2;
    }
        ll y=k+1;
       while(y<=n){
        cout<<y<<' ';
        y+=2;
       }
        cout<<'\n';
       
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