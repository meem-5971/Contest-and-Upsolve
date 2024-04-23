#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll m=0;
    ll mn;
    bool flag=false;
    for(int i=0;i<n;i++){
    mn=min(b,(v[i]-m)*a);
    if((f-mn)<=0){
      flag=true;
      break;
    }
    f-=mn;
    m=v[i];
    }
    if(!flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

   }
    return 0;
}