#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      ll cnt1=0,cnt0=0;
      bool flag=false;
      for(int i=0;i<n-1;i++){
        if(s[i]=='1' && flag==false){
            cout<<"IDK"<<'\n';
            cnt1++;
        }
        else{
            cout<<"NO"<<'\n';
            flag=true;
        }
      } 
      if(flag){
        cout<<"NO"<<'\n';
        return;
      } 
      else{
        if(s[n-1]=='1') cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
      }
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