#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
ll kadane(vector<ll> &u, ll n){
  ll meh=0, msf=LLONG_MIN,i=0;
  while(i!=n){
    meh+=u[i];
    if(meh<u[i]){
      meh=u[i];
    }
    if(msf<meh){
      msf=meh;
    }
    i++;
  }
  return msf;
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
      cin>>a[i];
    }
    vector<pair<ll,ll>>v;
    ll l=0;
    for(ll i=0;i<n-1;i++){
      if((a[i]& 1) && (a[i+1]&1)){//pasapasi 2ta odd tai subarray sesh
        v.push_back({l,i});
        l=i+1;
      }
      else if((!(a[i]&1))  && (!(a[i+1] &1))){//pasapasi 2ta even
        v.push_back({l,i});
        l=i+1;
      }
    }
    v.push_back({l,n-1});
    ll ans=LLONG_MIN;//negative value thakay min

    for(auto[x,y]: v){
      vector<ll>u;
      for(int i=x;i<=y;i++){
        u.push_back(a[i]);
      }
      ans=max(ans, kadane(u,(y-x+1)));
    }
    cout<<ans<<'\n';
   }
    return 0;
}