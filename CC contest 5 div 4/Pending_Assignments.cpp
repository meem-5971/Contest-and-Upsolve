#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int x,y,z;
      cin>>x>>y>>z;
      ll res=z*1440;
      if((x*y)<=res){
        cout<<"YES"<<'\n';
      }  
      else{
        cout<<"NO"<<'\n';
      }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}