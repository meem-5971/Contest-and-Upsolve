#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
 ll n;
 cin>>n;
 vector<ll>a(n+1);
 
 map<ll,ll>mp;  
 for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
 }   
  ll res=0,p=0;
  for(int i=0;i<=n;i++) {
    if(mp[i]>=3){
        res+=((mp[i]*(mp[i]-1)*(mp[i]-2))/6);
    }
    if(mp[i]>=2){
        res+=(((mp[i]*(mp[i]-1))/2)*p);
    }
    p+=mp[i];
  } 
  cout<<res<<'\n';
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