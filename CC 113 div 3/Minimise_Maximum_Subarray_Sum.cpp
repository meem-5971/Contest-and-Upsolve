#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int x,y;
    cin>>x>>y;
    int ans=ceil(x*0.1)/(y+1);
    if(y>=x-1) cout<<1<<'\n';
    else cout<<max(x-2*y,ans)<<'\n';
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