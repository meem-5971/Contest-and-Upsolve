#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,x,y;
     cin>>n>>x>>y;
     ll r=y/3;
     ll xl,l;
     if(x>=r){
       xl=x-r;
       l=r;
     }
     else{
       xl=0;
       l=x;
     }
    ll d=xl/2;
     
     if(d+l>=n){
        cout<<"YES"<<'\n';
     }   
     else{
        cout<<"NO"<<'\n';
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