#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<ll>a(n); 
       ll pos=0,neg=0,zero=0;
      
       for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero++;
            //zrid=i;
        }
        else if(a[i]>0){
            pos++;
        }
        else if(a[i]<0){
            neg++;
        }
       }
      if(zero>0){
        cout<<0<<'\n';
        return;
      }
      if(neg%2==1){
        cout<<0<<'\n';
        return;
      }
      if(pos==n || neg%2==0){
        cout<<1<<'\n';
        cout<<1<<' '<<0<<'\n';
        return;
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