#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
        vector<ll>a(n);
        int on=0,th=3;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                on=i;
            }
            if(a[i]==3){
                th=i;
            }
        }
        if(n<=2){
            cout<<-1<<'\n';
            return;
        }
        vector<ll>ans;
        for(int i=0;i<n;i++){
            if(i==on){
                ans.push_back(3);
            }
            else if(i==th){
                ans.push_back(1);
            }
            else{
                ans.push_back(a[i]);
            }
        }
        for (auto u:ans){
            cout<<u<<' ';
        }
        cout<<'\n';
        
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