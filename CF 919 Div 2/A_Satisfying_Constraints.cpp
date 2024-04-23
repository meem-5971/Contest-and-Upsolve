#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll x,y;
    vector<ll>rmv;
    ll l=LLONG_MIN;
    ll r=LLONG_MAX;
    for(int i=0;i<n;i++){
       cin>>x>>y;
       if(x==1){
      l=max(l,y);
    }
    else if(x==2){
        r=min(r,y);
    }
    else{
        rmv.push_back(y);
    }
    }
    ll t=0;
    for(int i=0;i<rmv.size();i++){
        if(rmv[i]>=l && rmv[i]<=r){
            t++;
        }
    }
    if(l>r) cout<<0<<'\n';
    else{
        cout<<(r-l+1)-t<<'\n';
    }
  } 
    return 0;
}