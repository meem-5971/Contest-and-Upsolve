#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,m;
      cin>>n>>m;
      vector<ll>a(n);
      vector<ll>b(m);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      for(int i=0;i<m;i++){
        cin>>b[i];
      } 
      sort(b.begin(),b.end());
      ll r=b[m-1];
      vector<ll>ans;
      for(int i=n-1;i>n-1-r;i--){
        ans.push_back(a[i]);
      } 
      sort(ans.begin(),ans.end());
      for(int i=0;i<=n-1-r;i++){
        cout<<a[i]<<' ';
      }
      for(auto i:ans){
        cout<<i<<' ';
      }
      cout<<'\n';
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