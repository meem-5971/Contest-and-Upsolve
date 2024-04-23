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
   if(n%3==0 || n%4==0) cout<<"YES"<<'\n';
   else if((n-4)%3==0 || (n-3)%4==0) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
  } 
    return 0;
}