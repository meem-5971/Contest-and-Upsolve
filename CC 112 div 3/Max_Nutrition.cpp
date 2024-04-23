#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     vector<int>b(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }  
     for(int i=0;i<n;i++){
        cin>>b[i];
     }  
     map<int,vector<int>>mp;
     for(int i=0;i<n;i++){
        mp[a[i]].push_back(b[i]);

     }
     ll ans=0;
     for(auto u:mp){
        sort(u.second.begin(),u.second.end());
        if(u.second.back()>0){
            ans+=u.second.back();
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