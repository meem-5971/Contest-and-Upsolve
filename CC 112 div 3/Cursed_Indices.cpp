#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      ll ans=0;
      
      sort(a.begin(),a.end());
      ll sum=a[0];
      for(int i=1;i<n;i++){
        if(a[i-1]>=a[i] || sum>=a[i]){
            ans++;
        }
        sum+=a[i];
      }
      cout<<ans<<'\n';
      for(auto u:a){
        cout<<u<<" ";
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