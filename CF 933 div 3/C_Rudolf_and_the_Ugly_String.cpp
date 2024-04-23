#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for(int i=0;i<n-2;i++){
        if((s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') || (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')){
            cnt++;
            i+=2;
        }
    }
    cout<<cnt<<'\n';
   }
    return 0;
}