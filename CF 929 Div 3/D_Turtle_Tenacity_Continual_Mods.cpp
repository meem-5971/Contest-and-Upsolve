#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
ll solve(ll x, ll y){
    if(y==0)
    return x;
    return(y,x%y);
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll mn=*min_element(a.begin(),a.end());
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==mn){
            cnt++;
        }
    }
    bool flag=true;
    if(cnt==1){
        flag=false;
    }
    else{
        for(int i=0;i<n;i++){
       if(a[i]!=mn){
        if(a[i]%mn!=0){
            flag=false;
            break;
        }
       }
    }
    }
    if(!flag){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}