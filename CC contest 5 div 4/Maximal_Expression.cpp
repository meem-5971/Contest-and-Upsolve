#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,k;
     cin>>n>>k;
     ll ans=0;
     ll cnt=0;
  for (int i =0 ; i <=n; i++) {
        int j = n % k - i;
        if (j < 0) j += k;

        ll res = (ll)i * j;
        if (res > ans) {
            cnt = (i);
            ans = res;
        }
    }
     cout<<cnt<<endl;  
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    solve();
   }
    return 0;
}