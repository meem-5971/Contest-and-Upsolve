#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      vector<ll>a(n);
      vector<ll>b(n);
      ll mx=LLONG_MIN;
      ll mn=LLONG_MAX;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
      }  
      for(int i=0;i<n;i++){
        cin>>b[i];
        mn=min(mn,b[i]);
      } 
      sort(a.begin(),a.end());
      reverse(a.begin(),a.end());
      sort(b.begin(),b.end());
      ll s=mn+mx;
      bool flag=true;
      for(int i=0;i<n;i++){
        if(a[i]+b[i]!=s){
            flag=false;
            break;
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
        cout<< a[i]<<' ';
      } 
      cout<<'\n'; 
      for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
      } 
      cout<<'\n';
      }
      else{
        cout<<-1<<'\n';
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