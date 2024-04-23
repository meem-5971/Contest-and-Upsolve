#include<bits/stdc++.h>
#define ll long long
using namespace std;
  

vector<ll> solve(ll n,ll k){

for(int i=n;i>0;i--){
        vector<ll> ans;
    for(int j=i;j<=n;j+=i){
        ans.push_back(j);
        if(ans.size()==k){
            return ans;
        }
    }
   // ans.clear();
}
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
   vector<ll>ans=solve(n,k);
   for(auto u:ans){
    cout<<u<<' ';
   }
   cout<<'\n';
 //  ans.clear();
    }
   
    return 0;
}