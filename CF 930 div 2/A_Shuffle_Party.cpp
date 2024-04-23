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
    ll n;
    cin>>n;
    ll ans=1;
    while(ans<n){
        ans*=2;
        if(ans>n){
            ans/=2;
            break;
        }
    }
    cout<<ans<<'\n';
   }
    return 0;
}