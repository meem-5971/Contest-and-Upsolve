#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,x,k;
      cin>>n>>x>>k;

      ll f=(n-x);
      ll r1=x%k;
      ll r2=f%k;
      cout<<abs(r1-r2)<<'\n';  
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