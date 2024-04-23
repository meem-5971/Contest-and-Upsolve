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
    ll n;
    cin>>n;
    ll ans=0;
    ll pos=0;
    for(int i=31;i>=0;i--){
        if(n&(1LL<<i)){
     if(pos==0){
        pos=i;
     }
     if(ans==0 || ans==2){
        ans++;
     }
        }
        else{
            if(ans==1){
                ans=2;
            }
        }
    }
   // cout<<ans<<' '<<pos;
if(ans!=3){
    cout<<0<<'\n';
    continue;
}
ll num=0, res=1e18;
for(int i=pos;i>=0;i--){
    num=num+pow(2,i);
    if(num<n) continue;
    res=min(res,num-n);
}
cout<<res<<'\n';
   }
    return 0;
}