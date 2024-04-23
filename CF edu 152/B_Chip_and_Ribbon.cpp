#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
     int n;
     cin>>n;
     int a[n+4];
     int cnt=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            cnt++;
        }
     }
     vector<int>b;
     b.push_back(1);
     
    if(n==1){
        cout<<a[0]-1<<'\n';
        return;
    }
    
     for(int i=0;i<n;i++){
        
       if(b[b.size()-1]!=a[i]){
        b.push_back(a[i]);
       }
      
     }
     ll ans=0;
   for(int i=0;i<=b.size()-1;i++){
    if(b[i]<b[i+1])
    ans+=(b[i+1]-b[i]);
   }
   cout<<ans<<'\n';

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