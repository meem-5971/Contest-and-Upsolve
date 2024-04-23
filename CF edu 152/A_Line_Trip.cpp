#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,x;
      cin>>n>>x;
      vector<ll>a(n+1);
      a[0]=0;
      for(ll i=1;i<n+1;i++){
        cin>>a[i];
      }  
      
      ll ans= 0;
      bool flag=false;

       for(ll i=0;i<n;i++){
        ans=max(ans,a[i+1]-a[i]);
        flag=true;
      } 
      if(flag){
        ll t=((x-a[n])*2);
        ans=max(t,ans);
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