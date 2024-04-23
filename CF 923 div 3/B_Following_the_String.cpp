#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     vector<ll>a(n);
      string s;
    // char c='a';
     vector<int>fq(26,-1);
     for(int i=0;i<n;i++){
        cin>>a[i];
         for(char c='z';c>='a';c--){
        if(fq[c-'a']==a[i]-1){

            fq[c-'a']++;
            s+=c;
            break;
        }
     
     }   
    
     }
     cout<<s<<'\n';
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