#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,k,x;
      cin>>n>>k>>x;
      vector<ll>a(n);
      ll sum=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      sort(a.begin(),a.end());
      ll t=n-x;
      for(int i=0;i<n;i++){
       if(i<t)
        sum+=a[i];
        else 
        sum-=a[i];
      }
      vector<ll>b(n);
      ll ans=sum;
      
     // cout<<ans<<'\n';
     // int t=0;
      ll s1=0;
     // ll ans=LLONG_MIN;
    // reverse(a.begin(),a.end());
      for(int i=n-1;i>=n-k;i--){
        if(i>=t)
        sum+=a[i];
        if(t-1>=0){
            sum-=2*a[t-1];

        }
        t--;

         ans=max(ans,sum);
         
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