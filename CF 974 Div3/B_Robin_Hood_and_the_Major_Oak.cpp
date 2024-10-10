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
    ll d=n-k;
    ll t1,t2;
    if(n%2==0){
        t1=n/2;
    }
    else{
        t1=(n+1)/2;
    }
    if(d%2==0){
        t2=d/2;
    }
    else{
        t2=(d+1)/2;
    }

    ll ans=t1-t2;

    if(ans%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}