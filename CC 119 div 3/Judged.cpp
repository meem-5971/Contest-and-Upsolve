#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     vector<int>a(5);
     int cnt=0;
     for(int i=0;i<5;i++){
        cin>>a[i];
        if(a[i]==1){
            cnt++;
        }
     }
     if(cnt>=4){
        cout<<"YES"<<'\n';
     }  
     else{
        cout<<"NO"<<'\n';
     } 
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