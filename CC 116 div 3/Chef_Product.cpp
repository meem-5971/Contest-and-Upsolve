#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n;
   cin>>n;
   ll z=sqrtl(n);
   if(n%2==1){
    z++;
   }   
   cout<<z/2<<'\n';
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