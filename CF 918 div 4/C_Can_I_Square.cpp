#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     vector<ll>a(n);
     ll sum=0;
     for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
     }
     
ll s=sqrt(sum);
     if(s*s ==sum){
        cout<<"YES"<<'\n';
     }
     else{
        cout<<"NO"<<'\n';
     }
    
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