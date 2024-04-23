#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
        vector<ll>a(2*n);
        vector<pair<ll,ll>>v(n);
        for(int i=0;i<2*n;i++){
          cin>>a[i];
          a[i]--;
          v[a[i]].first=i-v[a[i]].first;
          v[a[i]].second=a[i];
        }
        sort(v.rbegin(),v.rend());
        for(auto u:v){
            cout<<u.second+1<<' ';
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