#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int a,b;
      
      cin>>a>>b;
      int p=a,q=b;
      int t1=0,t2=0;
      int a1=0,a2=0;
      while(p>=1 && q>=1){
        if(p%q==0){
          t1=1;
          break;
        }
       a1++;
       q++;
       p--;
       
      }
      if(t1==0){
        a1=INT_MAX;
       }
      p=a,q=b;
       while(p>=1 && q>=1){
        if(p%q==0){
          t2=1;
          break;
        }
        a2++;
        q--;
        p++;
        
       }
       if(t2==0){
            a2=INT_MAX;
        }
       cout<<min(a1,a2)<<'\n';
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