#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n);
      vector<ll>b(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
      }
      ll mx=INT_MIN;
      ll sum=0;
      ll ans=INT_MIN;
      for(ll i=0;i<n;i++){
        if(i==k) break;
        sum+=a[i];
       // cout<<sum<<'\n';
        mx=max(mx,b[i]);
        ll res=sum+mx*(k-i-1);
        //cout<<sum<<" "<<res<<'\n';
        ans=max(ans,res);
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