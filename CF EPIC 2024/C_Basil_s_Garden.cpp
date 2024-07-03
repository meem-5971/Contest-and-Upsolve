#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<ll>h(n);
for(ll i=0; i<n; i++){
cin>>h[i];
}
ll ans=0;
for(ll i=n-1;i>=0;i--){
    ans=max(ans,h[i]+i);
}
cout<<ans<<endl;
}
return 0;
}