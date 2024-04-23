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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=true;
     for(int i=0;i<n;i++){
        if(a[i]<=4){
            flag=false;
            break;
        }
    }
    if (flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
    return 0;
}