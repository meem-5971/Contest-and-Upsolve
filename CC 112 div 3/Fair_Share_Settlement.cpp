#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,k;
        cin>>n>>k;
        double res=ceil(n/(k+1));
        ll d=res*k;
        cout<<n-d<<'\n';

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