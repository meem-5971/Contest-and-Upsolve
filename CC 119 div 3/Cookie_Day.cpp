#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,k;
     cin>>n>>k;
     vector<ll>a(n);
     ll ans=LLONG_MAX;
     bool flag=false;
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=k){
            ll r=a[i]%k;
            ans=min(ans,r);
            flag=true;
        }
     }
     if(flag) cout<<ans<<'\n';
     else cout<<-1<<'\n';   
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