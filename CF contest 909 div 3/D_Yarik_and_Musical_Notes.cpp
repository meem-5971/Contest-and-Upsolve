#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     map<int,int>mp;
         for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
     }
     ll ans=0;
     //equal elements gula pair korbe
     for(int i=0;i<n;i++){
        mp[a[i]]--;//j element ar jnno pair khujbo setar count baad hbe
        if(a[i]==1 || a[i]==2){// 1,2 both equal na holew akjon arkjon ar sthe pair korbe
            ans+=mp[1];
            ans+=mp[2];
        }
        else{
            ans+=mp[a[i]];
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