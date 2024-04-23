#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
   int n,x,d;
   cin>>n>>x>>d;
   int r= n/(5*x);
   int ans=r+d;
   cout<<ans<<endl; 
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}