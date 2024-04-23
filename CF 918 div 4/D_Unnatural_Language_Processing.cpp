#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       string s;
       cin>>s;
       string ans;
       map<int,int>mp;
       mp['a']++,mp['e']++;
       for(int i=0;i<n;i++){
        if(mp[s[i]]){
            ans.push_back(s[i]);
            int j=i+1;
            if(j+1<=s.size()-1){
                if(mp[s[j]]==0 && mp[s[j+1]]==0){
                    ans.push_back(s[j]);
                    ans.push_back('.');
                    i=j;
                }
                else{
                   ans.push_back('.');
                }
            }
        }
        else{
            ans.push_back(s[i]);
        }
       }
      // ans.pop_back();
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