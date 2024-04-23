#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt0=0,cnt1=0;
   for(int i=0;i<n;i++){
    if(s[i]=='0'){
        cnt0++;
    }
    if(s[i]=='1'){
        cnt1++;
    }
   }     
   if(cnt0>cnt1){
    cout<<"YES"<<'\n';
    return;
   }
   
   for(int i=1;i<n;i++){
  if(s[i-1]!= s[i]){
    cout<<"YES"<<'\n';
    return;
  }
   }
   
    cout<<"NO"<<'\n';
   
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