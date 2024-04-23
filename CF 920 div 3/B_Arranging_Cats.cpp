#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     string s1,s2;
     cin>>s1>>s2;
     ll t=0;
     
     ll c1=0,c2=0,c3=0;
     bool flag=false;; 
     for(int i=0;i<n;i++){
        if(s2[i]=='1' && s1[i]=='0'){
            c2++;
        }
        if(s2[i]=='0' && s1[i]=='1'){
            c3++;
            flag=true;
        }
        if(s1[i]=='1' && s2[i]=='0'){
         c1++;
        }
     }
   ll mn=min(c2,c1);
   ll x=abs(c1-c2);
   cout<<mn+x<<'\n';
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