#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
ll n;
cin>>n;

vector<ll> a(n);
map<ll,ll>mp;
for(int i=0; i<n; i++){
    cin>>a[i];
    mp[a[i]]++;
}
ll ans =n;
for(auto u:mp){
    ll res=(n-u.second)*u.first; //applying condition 
    ans=min(ans,res);
}
cout<<ans<<endl;
}
return 0;
}