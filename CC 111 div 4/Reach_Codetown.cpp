#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        string s;
        cin>>s;
        bool flag=false;
        string s1="CODETOWN";
        for(int i=0;i<8;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
               if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U') {
              
               }
               else{
                  flag=true;
                break;
               }
            }
            else{
                if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U') {
                flag=true;
               
               }
            }
        }
        if(flag) cout<<"NO"<<'\n';
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