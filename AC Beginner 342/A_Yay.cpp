#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s;
   cin>>s;
   ll n=s.size();
   unordered_map<int,char>mp;
   for(int i=0;i<n;i++){
    mp[s[i]]++;
   }
     for(int i=0;i<n;i++){
    if(mp[s[i]]==1){
        cout<<i+1<<'\n';
        break;
    }
   }
    return 0;
}