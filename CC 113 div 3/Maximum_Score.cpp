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
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        if(m==0) x++;
        else y++;
    }
    int ans=min(x,y);
    cout<<ans<<'\n';
   }
    return 0;
}