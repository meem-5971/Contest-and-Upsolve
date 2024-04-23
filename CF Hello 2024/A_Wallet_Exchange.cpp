#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll a,b;
     cin>>a>>b;
     if((a==b)||(a%2==0 && b%2==0) ||(a%2==1 && b%2==1)){
        cout<<"Bob"<<'\n';
     }   
     else{
        cout<<"Alice"<<'\n';
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