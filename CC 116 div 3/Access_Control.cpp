#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n,x;
       cin>>n>>x;
       string s;
       cin>>s;
       if(s[0]=='0'){
        cout<<"NO"<<'\n';
        return;
       }
       ll t=x; 
       bool flag=true;
       for(int i=0;i<n;i++){
         if(s[i]=='1'){
            t=x;
         }
         if(s[i]=='0'){
            if(t<=0){
              flag=false;
              break;
            }
            else{
                t-=1;
            }
        }
       }
       if(flag) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
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