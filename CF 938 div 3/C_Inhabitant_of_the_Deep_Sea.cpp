#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
ll tt=2LL*k;
ll l=0,r=0;
for(int i=0;i<n && tt>0;i++){

ll atk=min(a[i],tt/2);
l+=atk;
t-=atk*2;
}
if(tt>0){
    r=min(tt/2,a[n-1]);
}
cout<<r+l<<endl;
}
return 0;
}