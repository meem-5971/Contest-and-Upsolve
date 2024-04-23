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
    int n;
    cin>>n;
    ll rp=0,rn=0,lp=0,ln=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x>0){
            lp++;
        }
        if(y>0){
            rp++;

        }
        if(x<0){
            ln++;
        }
        if(y<0){
            rn++;
        }

    }
    if(rp!=0 && rn!=0 && lp!=0 && ln!=0){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
   }
    return 0;
}