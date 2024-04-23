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
    ll n,m;
    cin>>n>>m;
    ll prod=1;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        prod*=a[i];
    }
    string s;
    cin>>s;
    vector<ll>ans;
    ans.push_back(prod%m);
    int tt=n-1;
    int p=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='L' ){
            prod/=a[p];
            ans.push_back(prod%m);
            p++;
        }
        else if(s[i]=='R' ){
            prod/=a[tt];
            ans.push_back(prod%m);
            tt--;
        }
    }
    for(auto u:ans){
        cout<<u<<' ';
    }
    cout<<'\n';
   }
    return 0;
}