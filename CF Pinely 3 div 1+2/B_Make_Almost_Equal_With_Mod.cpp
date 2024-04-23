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
    vector<ll>a(n);
    bool flag=false;
    ll o=0,e=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e++;
        }
        if(a[i]%2==1){
            o++;
        }
        if(e>0 && o>0){
            flag=true;
        }
    }
    if(flag) cout<<2<<'\n';
    else if(e==n and o==0){
        cout<<3<<'\n';
    } 
    else if(o==n && e==0){
        cout<<4<<'\n';
    }
   }
    return 0;
}