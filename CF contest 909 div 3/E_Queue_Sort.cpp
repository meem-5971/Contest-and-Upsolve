#include<bits/stdc++.h>
#define ll long long
using namespace std; 
//min element ar agy jto gula elements ache totogula operations lagbe
//min ar porer element jdi increasingly sorted already na thake tahle -1
void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    ll mn=LLONG_MAX,mnid=-1;
    for(int i=0;i<n;i++){
        if(mn>v[i]){
            mn=v[i];
            mnid=i;
        }
    }
    for(int i=mnid;i<n-1;i++){
        if(v[i]>v[i+1]){
            cout<<-1<<'\n';
            return;
        }
    }
    cout<<mnid<<'\n';     
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
