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
    ll x;
    cin>>x;
    ll y=0,z=0;
    ll t=0;
    for(int i=29;i>=0;i--){
        if((x>>i)&1){
            if(t){
                y-=(1<<i);
                z+=(1<<i);
            }
            else{
                y+=(1<<i);
                t=1;
            }
        }
    }
    cout<<z<<' '<<y+z<<'\n';
   }
    return 0;
}