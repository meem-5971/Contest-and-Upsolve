#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,q;
     cin>>n>>q;
   string s;
   cin>>s;
     ll t=1;
     ll ans=1;
     vector<ll>res;
     bool flag=false;
     for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
           t++;
            ans=max(ans,t);
        }
        else{
        
         t=1;
         
        } 
     }
    
     cout<<ans<<' '; 
    for(int i=n;i<q+n;i++){
        char c;
        cin>>c;
        s+=c;
         
        if(s[i]==s[i-1]){
           t++;
            ans=max(ans,t);
        }
        else{
        
         t=1;
         
        } 
     
         cout<<ans<<' ';
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