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
  string s;
  cin>>s;
  int q;
  cin>>q;
  while(q--){
    char a,b;
    cin>>a>>b;
    replace(s.begin(),s.end(),a,b);
  }
  cout<<s<<'\n';
    return 0;
}