#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,p,l,t;
        cin>>n>>p>>l>>t;
        ll tsk;
        if(n%7==0){
         tsk=(n/7);
        }
        else{
            tsk=(n/7)+1;
        } 
        ll sum=0;
        ll s=l+t;
        ll cnt=0;
        while(sum<p){
            
         
          
          if(tsk>0){
            if(tsk==1){
                sum+=s;
                tsk--;
                cnt++;
            }
            else{
                sum+=(s+t);
             tsk-=2;
             cnt++;
            }
             
          }
          
          else{
            sum+=l;
            cnt++;
          }

        }
        cout<<n-cnt<<'\n';
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