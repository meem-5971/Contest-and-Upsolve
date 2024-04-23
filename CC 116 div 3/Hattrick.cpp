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
    char a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if((a=='W' && b=='W' && c=='W') || (b=='W' && c=='W' && d=='W') || (c=='W' && d=='W' && e=='W') || (d=='W' && e=='W' && f=='W')){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}