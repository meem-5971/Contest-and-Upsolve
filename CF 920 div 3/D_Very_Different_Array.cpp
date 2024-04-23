#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n,m;
     cin>>n>>m;
     vector<ll>a(n);   
     vector<ll>b(m);   
     vector<ll>c(m);  
     for(int i=0;i<n;i++){
        cin>>a[i];
     } 
      for(int i=0;i<m;i++){
        cin>>b[i];
        c[i]=b[i];
     } 
     sort(b.begin(),b.end());
     sort(c.begin(),c.end(),greater<ll>());
     sort(a.begin(),a.end(),greater<ll>());
     ll ans=0;
     if(n%2==0){
        for(int i=0;i<n/2;i++){
            ans+=(a[i]-b[i]);
        }
        int j=(n/2)-1;
        for(int i=n/2;i<n;i++){
            ans+=(c[j]-a[i]);
            j--;
        }
     }
     else{
       
        if((a[n/2]-b[n/2])>=(c[0]-a[n/2])){
              for(int i=0;i<=n/2;i++){
            ans+=(a[i]-b[i]);
        }
          int j=(n/2)-1;
        for(int i=n/2+1;i<n;i++){
            ans+=(c[j]-a[i]);
            j--;
        }
        }
        else{
             for(int i=0;i<n/2;i++){
            ans+=(a[i]-b[i]);
        }
          int j=(n/2);
        for(int i=n/2;i<n;i++){
            ans+=(c[j]-a[i]);
            j--;
        } 
        }
       
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