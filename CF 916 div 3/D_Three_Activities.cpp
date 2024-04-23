#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<pair<ll,ll>>a(n); 
       vector<pair<ll,ll>>b(n); 
       vector<pair<ll,ll>>c(n); 
       for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
       }
       for(int i=0;i<n;i++){
        cin>>b[i].first;
        b[i].second=i+1;
       }
       for(int i=0;i<n;i++){
        cin>>c[i].first;
        c[i].second=i+1;
       }
       sort(a.rbegin(),a.rend());
       sort(b.rbegin(),b.rend());
       sort(c.rbegin(),c.rend());
       //for(auto u:a){
        //cout<<u.first<<' ';
      // }
      ll ans=0;
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
            if(a[i].second != b[j].second && a[i].second !=c[k].second && b[j].second != c[k].second){
                ans=max(ans, (a[i].first+b[j].first+c[k].first));
            }
            }
        }
       }
       cout<<ans<<'\n';
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