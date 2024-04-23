#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll f=0,l=0;
      for(int i=0;i<n;i++){
        if(s[i]=='B'){
            f=i;
            break;
        }
      } 
      for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            l=i;
            break;
        }
      } 
      cout<<l-f+1<<'\n';
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