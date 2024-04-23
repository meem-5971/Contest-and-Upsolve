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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll s=0,cr=0;
    for(int i=0;i<n;i++){
        cr+=a[i];
        if(cr>=m){
            s++;
            cr=0;
        }
    }
    cout<<s<<'\n';
   }
    return 0;
}