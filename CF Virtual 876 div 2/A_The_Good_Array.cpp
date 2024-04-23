#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,k;
     cin>>n>>k;
     vector<ll>ans(n+1,0);
     ll cnt=0;
     for(int i=1;i<=n;i++){
      if(ceil(double(i)/(double)k)>cnt){
        ans[i]=1;
        cnt++;
      }
     }
     reverse(ans.begin()+1,ans.end());
      cnt=0;  
     for(int i=1;i<=n;i++){
        if(ceil(double(i)/(double)k)>cnt){
        ans[i]=1;
        cnt++;
      }
      if(ans[i]==1){
        cnt++;
      }
     }
     int t=0;
     for(int i=1;i<=n;i++){
        if(ans[i]==1){
            t++;
        }
     } 
     cout<<t<<'\n';
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