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
  ll x,y;
   cin>>x>>y;
   if(x==y || x-1==y){
    cout<<1<<'\n';
   }
   else if(x>y){
    cout<<0<<'\n';
   }
   else{
    cout<<y/(x-1)<<'\n';
   }
   }
   
    return 0;
}