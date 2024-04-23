#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);    
    vector<ll>b(n);  
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[a[i]]=x;
    }  
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    } 
    cout<<'\n';
    for(int i=0;i<n;i++){
        cout<<mp[a[i]]<<' ';
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