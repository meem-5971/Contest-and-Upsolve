#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   ll cnt=0;
   for(int i=0;i<n;i++){
    if(i>=1){
        if(s[i]=='.' && s[i+1]=='.' && s[i-1]=='.'){
            cout<<2<<'\n';
            return;
        }
        else if(s[i]=='.'){
            cnt++;
        }
    }
    else{
        if(s[i]=='.'){
            cnt++;
        }
    }
   }     
   cout<<cnt<<'\n';
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