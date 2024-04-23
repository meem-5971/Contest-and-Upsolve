#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      string a;
      string b;
      cin>>a>>b;
      ll cnt1=0,cnt2=0;
      for(int i=0;i<n;i++){
        if(a[i]=='R' && b[i]=='S'){
          cnt1++;
        }
       else if(a[i]=='S' && b[i]=='P'){
          cnt1++;
        }
       else if(a[i]=='P' && b[i]=='R'){
          cnt1++;
        }
        else if(a[i]==b[i]){
            continue;
        }
        else{
            cnt2++;
        }
      }
      if(cnt1>cnt2){
        cout<<0<<endl;
      }  
        else{
        
            ll res=(cnt1+cnt2)/2;
            res++;
            cout<<res-cnt1<<endl;
        
      }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    solve();
   }
    return 0;
}