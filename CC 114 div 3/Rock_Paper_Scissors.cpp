#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    string an="";
    
    ll x=0;
    ll t=n/2+1-x;
    ll y=n;
     if(n<=2){
      for(int i=0;i<n;i++){
        if(s[i]=='R'){
            an+='P';
        }
        else if(s[i]=='P'){
            an+='S';
        }
        else if(s[i]=='S'){
            an+='R';
        }
      }
       cout<<an<<'\n';
       return;
    }   
    for(int i=0;i<n;i++){
        
        t=n/2+1-x;
        y--;
        if(s[i]=='R'){
            an+='P';
            x++;
        }
        else if(t<y){
            an+='P';
        }
        else{
            if(s[i]=='R'){
            an+='P';
        }
        else if(s[i]=='P'){
            an+='S';
        }
        else if(s[i]=='S'){
            an+='R';
        }
        }
    }
    cout<<an<<'\n';
   
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}