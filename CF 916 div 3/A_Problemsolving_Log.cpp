#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int ans=0;
        for(auto u:mp){
            if(u.second>=(u.first-'A'+1)){
             ans++;
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