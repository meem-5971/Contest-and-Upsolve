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
    ll n,k;
    cin>>n>>k;
    
    vector<ll>v(n);
   
    for(ll i=0;i<n;i++){
        cin>>v[i];
        
    }
   bool flag =false;
    for(ll i=0;i<n-1;i++){
        if(k==1 && v[i]>v[i+1]){
            
            flag=true;
            break;
        }
    }
    if(flag) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';

  } 
    return 0;
}