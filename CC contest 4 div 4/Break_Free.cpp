#include<bits/stdc++.h>
#define ll long long
ll mod=1e9+7;
using namespace std;
  
void solve(){
  ll n;
  cin>>n;
  ll a[n]; 
  ll cnt=0; 
  for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){//even elements count
        cnt++;
    }
  } 
  ll sset=1;
  for(ll i=0;i<cnt;i++){
    sset=(2*sset)%mod;//even elements gular subset
  }  
  if(cnt==n){
    cout<<sset-1<<'\n';//jdi sobgulo element e even hoy,tkhn main set jeta subset hoy seta baad
    return;
  } 
  cout<<sset<<'\n';
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;  cin>>t;
   while(t--){
    solve();
   }
    return 0;
}