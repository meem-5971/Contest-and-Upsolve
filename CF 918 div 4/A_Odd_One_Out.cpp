#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int a,b,c;
      cin>>a>>b>>c;
      int fq[10]={0};
      fq[a]++;
      fq[b]++;
      fq[c]++;
      for(int i=0;i<10;i++){
        if(fq[i]== 1){
            cout<<i<<'\n';
            return;
        }
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