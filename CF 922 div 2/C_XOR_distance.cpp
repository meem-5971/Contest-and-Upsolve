#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll a,b,r;
    cin>>a>>b>>r;
    ll j = 0, x = 0;
    while (a || b) {
        if(x>r){
            break;
        }
        if ((a & 1) && (b & 1)) {
 
            x += (1 << j);
        }
        a>>= 1;
        b >>= 1;
        j += 1;
    } 
    cout<<abs(a^x -b^x)<<'\n';   
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