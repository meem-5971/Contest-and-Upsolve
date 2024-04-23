#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t; 
   while(t--){
    ll n;
    cin>>n;
    ll r=n;
    vector<ll>prime;
    if(n==2 || n==0 || n==1){
        cout<<"Bob"<<endl;
        continue;
    }
    else if( n%2 !=0){
        cout<<"Alice"<<endl;
        continue;
    }
    else{
        cout<<"Bob"<<endl;
    }
     
   }
    return 0;
}