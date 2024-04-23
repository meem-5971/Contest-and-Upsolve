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
    ll a[n][n];
    map<bool,ll>mp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
            mp[a[i][j]]=true;
        }
    }
    vector<ll>ans;
    if(n==1){
        cout<<"YES"<<'\n'<<7<<'\n';
        continue;

    }
    int x=0;
    int c=1;
     for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
           if(i!=j){
            if(mp[x|a[i][j]]==true && c<=n && a[i][j]!=0 ){
                ans.push_back(a[i][j]);
                c++;
                x++;
            }
           }
        }
    }
    if(ans.size()==0 || ans.size()<n) cout<<"NO"<<'\n';
    else{
        cout<<"YES"<<'\n';
        for(auto u:ans){
          cout<<u<<" ";
        }
        cout<<'\n';
    }

  } 
    return 0;
}