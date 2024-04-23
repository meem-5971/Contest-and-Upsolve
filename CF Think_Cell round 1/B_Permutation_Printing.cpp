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
    ll p;
    vector<ll>ans;
    if(n%2==0){
        p=n;
        ll q=1;
        for(int i=n;i>0;i--){
            if(i%2==0 && p>0 ){
                ans.push_back(p);
                p-=2;

            }
            else if (q<=n){
           ans.push_back(q);
           q+=2;
            }
        }
    }
    else{
        p=n;
        ll q=2;
        for(int i=0;i<n;i++){
            
            if(i%2==0 && p>0){
                ans.push_back(p);
                p-=2;

            }
            else if(q<=n){
           ans.push_back(q);
           q+=2;
            }
            
        }
    }
     for(auto u:ans){
            cout<<u<<' ';
        }
        cout<<'\n';
   }
    return 0;
}