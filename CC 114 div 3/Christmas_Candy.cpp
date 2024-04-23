#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n;
   cin>>n;
   vector<ll>a(n);
   ll mx=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
  
    
   }
   vector<ll>ans(n);
   for(int i=0;i<n;i++){
      mx=max(mx,a[i]);
     ans[i]=mx;
   }
   
   ll r=0;
   for(int i=0;i<n;i++){
    if(a[i]<ans[i]){
        r++;
    }
   }
  cout<<r<<'\n';

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