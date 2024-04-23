#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll cp=0,cm=0;
  for(int i=0;i<n;i++){
   if(s[i]=='+'){
    cp++;

   }
   if(s[i]=='-'){
    cm++;
   }
  } 
  cout<<abs(cp-cm)<<'\n';   
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