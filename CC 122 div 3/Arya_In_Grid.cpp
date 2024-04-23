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
    ll n,m,x,y,l,ans,r=1,c=1;
    cin>>n>>m>>x>>y>>l;
    if(l==1){
        ans=n*m;
    }
    else{
        r+=((m-y)/l)+(y-1)/l;
        c+=((n-x)/l)+(x-1)/l;
        ans=r*c;
    }
    cout<<ans<<'\n';
  } 
    return 0;
}