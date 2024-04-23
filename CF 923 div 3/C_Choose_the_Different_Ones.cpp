#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    ll r=k/2;
    map<ll,ll>ma;
    map<ll,ll>mb;
    ll ta=0,tb=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       ma[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        
           mb[b[i]]++;
        
    }
    bool flag=false;
    for(int i=1;i<=k;i++){
        flag=false;
        if(ma[i]){
            flag=true;
            ta++;
        }
        if(mb[i]){
            flag=true;
            tb++;
        }
        if(flag==false){
           flag=false;
           break;
        }
    }
    if(ta>=r && tb>=r && flag==true){
     cout<<"YES"<<'\n';
    }
      else{
        cout<<"NO"<<'\n';
      }
   }
    return 0;
}