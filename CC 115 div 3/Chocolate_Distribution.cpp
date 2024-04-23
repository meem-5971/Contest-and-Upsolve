#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     ll r=ceil((double)n/2);
     cout<<r<<" "<<n<<'\n';   
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