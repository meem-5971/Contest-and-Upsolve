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
 vector<ll>v(t);
 for(int i=0;i<t;i++){
    cin>>v[i];
 }  
 int q;
 cin>>q;
 while(q--){
    int a,b;
    cin>>a>>b;
    int x=0,y=0;
    for(int i=0;i<t;i++){
        if(v[i]==a){
            x=i;
        }
        if(v[i]==b){
            y=i;
        }

    }
   // cout<<x<<' '<<y<<'\n';
    if(x>y){
        cout<<b<<'\n';
    }
    else{
        cout<<a<<'\n';
    }
 }
    return 0;
}