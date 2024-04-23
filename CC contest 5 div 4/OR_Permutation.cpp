#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n;
    cin>>n;
  
   
    cout<<"1 3 2";
    if(n==3){
        cout<<'\n';
        return;
    }
    if(n>3){
        cout<<" ";
       for(ll i=n-1;i>3;i--){
      cout<<i<<" ";
    }
    cout<<n<<'\n';
 
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