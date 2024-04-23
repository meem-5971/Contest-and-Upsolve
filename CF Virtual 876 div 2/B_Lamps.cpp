#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
     vector<int>a(n);
     vector<ll>b(n);  
     for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
     } 
     map<int,vector<ll>>lmp;
     for(int i=0;i<n;i++){
        lmp[a[i]].push_back(b[i]);
     }
     for(int i=1;i<=n;i++){
        if(lmp[i].empty()) continue;
        sort(lmp[i].begin(),lmp[i].end(),greater<ll>());
     }
     ll ans=0;
     for(auto u:lmp){
        int t=0;
        for(auto v:u.second){
            if(t==u.first) break;
            t++;
            ans+=v;
        }
     }
     cout<<ans<<'\n';
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