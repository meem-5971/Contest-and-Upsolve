#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
      ll n,x;
      cin>>n>>x;
      if(x==0){
        for(int i=1;i<=n;i++){
            cout<<i<<' ';
        }
        cout<<'\n';
        return;
      } 
      if(n==x || x+1==n){
        cout<<-1<<'\n';
        return;
      } 
      ll f=n-x-1;
      int j=1;
      for(int i=1;i<=n;i++){
        if(i==f){
            cout<<n<<' ';
        }
        else{
            cout<<j<<' ';
            j++;
        }
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