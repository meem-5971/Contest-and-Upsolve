#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==4){
            if((a[0]+a[1])==(a[2]+a[3])) cout<<"NO"<<'\n';
            else cout<<"YES"<<'\n';
            return;
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size()==1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
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