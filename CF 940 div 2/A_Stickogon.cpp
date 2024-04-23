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
set<int>s;
vector<int>a(n);
map<int,int>mp;
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;
s.insert(a[i]);
}
int ans=s.size();
// cout<<ans<<endl;

for(auto u:s){
if(mp[u]<=2){
    ans--;
}
}
cout<<ans<<endl;
}
return 0;
}