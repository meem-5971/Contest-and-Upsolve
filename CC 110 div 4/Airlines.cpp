#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll x,n; 
       cin>>x>>n;
       ll r=(n-(x*100));
       if(r>=0)
       cout<<ceil((double)r/100)<<'\n';
       else
       cout<<0<<'\n';
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