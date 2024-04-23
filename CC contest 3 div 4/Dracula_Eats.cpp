#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       if(n==1){
        cout<<0<<endl;
        return;
       } 
        double res=((n-2)/7);
        double ans=ceil(res);
        cout<<ans+1<<endl;
       
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}