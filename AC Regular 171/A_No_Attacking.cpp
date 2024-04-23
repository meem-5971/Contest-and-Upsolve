#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    ll d=n*n;
    if(d-((a*n)+(n-a)*a)>=b  && n>=a && n>=2 && a>=2 ){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
   }
    return 0;
}