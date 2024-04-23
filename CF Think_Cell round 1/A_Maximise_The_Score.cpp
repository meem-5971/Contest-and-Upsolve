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
    
    ll m=2*n;
    vector<ll>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    for(int i=0;i<m;i+=2){
      ll t=min(a[i],a[i+1]);
      ans+=t;
     // cout<<ans<<' ';
    }
    cout<<ans<<'\n';
   }
    return 0;
}