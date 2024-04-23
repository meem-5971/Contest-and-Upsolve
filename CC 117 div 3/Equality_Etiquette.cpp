#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll target(ll x1){
    return x1*(x1+1)/2;
}
  ll so(ll x,ll y){
    ll l=abs(x-y);
    double p=sqrt(1+8*l);
    ll a=-1+p;
    ll n=static_cast<ll>(std:: ceil(x/2));
    while((target(n)-1)%2!=0){
        n++;
    }
 return n;
  }
void solve(){
        ll x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<'\n';
            return;
        }
        cout<<so(x,y)<<'\n';
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