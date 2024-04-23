#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<ll>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       ll x=INT_MAX, y=INT_MAX;
       ll cnt=0;
       for(auto u:a){
        if(x>y) swap(x,y);
        if(u<=x) x=u;
        else if(u<=y) y=u;
        else{
            x=u;
            cnt++;
        }
       }
       cout<<cnt<<'\n';
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