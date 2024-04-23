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
    vector<ll>v;
  ll mx=LLONG_MIN;
    for(int i=0;i<22;i++){
        int x,y;
        cin>>x>>y;
        ll res=0;
        res=x+(20*y);
        v.push_back((x+(y*20)));
        
        

    }
   
   // cout<<ans<<'\n';
   ll p=max_element(v.begin(),v.end()) - v.begin();
   cout<<p+1<<'\n';
  } 
    return 0;
}