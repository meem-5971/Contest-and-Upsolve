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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='@'){
            ans++;
        }
        if(s[i]=='*' && s[i+1]=='*'){
            break;
        }
    }
    cout<<ans<<'\n';
   }
    return 0;
}