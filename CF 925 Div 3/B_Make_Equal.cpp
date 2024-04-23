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
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll r=sum/n;
    ll x=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]>=r){
        x+=abs(a[i]-r);
        }
        else{
            ll y=abs(a[i]-r);
            if(y>x){
                flag=false;
                break;
            }
            else{
                //a[i]+=y;
                x-=y;
            }
        }
    }
   if(flag) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
  } 
    return 0;
}