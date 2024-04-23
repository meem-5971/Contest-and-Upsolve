#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int x,y;
      cin>>x>>y;
      int r =abs(x-y);
      cout<<(x+y+(r-1))<<'\n';  
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