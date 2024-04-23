#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     vector<ll>a(n+1);
     for(int i=1;i<=n;i++){
        cin>>a[i];
     }   
     ll os=0,es=0;
     unordered_map<ll,bool>mp;
     bool flag=false;
     for(int i=1;i<=n;i++){
        if(i%2==0){
            es+=a[i];
        }
        if(i%2==1){
            os+=a[i];
        }
        ll d=os-es;
        if(d==0 || mp[d]==true){
            flag=true;
            break;
        }
        mp[d]=true;
     }
     if(flag) cout<<"YES"<<'\n';
     else cout<<"NO"<<'\n';
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