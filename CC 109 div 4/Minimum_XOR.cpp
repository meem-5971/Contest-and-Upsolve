#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
  ll n;
  cin>>n;
  ll a[n];
  ll p;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    if(i==0){
        p=a[0];
    }
    else{
        p^=a[i];
    }
  }      
  map<ll,ll>mp;
  ll ans=p;
  for(ll i=0;i<n;i++){
     ll xr =(p^a[i]);
     ans=min(ans,xr);
  } 
  
      
   
    
       cout<<ans<<'\n';
    
   
  
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