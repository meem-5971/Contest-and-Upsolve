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
    int n,k;
    cin>>n>>k;
    if(k==0){
        for(int i=n;i>1;i--){
            cout<<i<<" ";
        }
        cout<<1<<'\n';
        
    }
    else if(n-1==k){
        for(int i=1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<n<<'\n';
    }
    else{
        int r=n-k;
        for(int i=r;i<=n;i++){
            cout<<i<<' ';
        }
        for(int i=r-1;i>1;i--){
            cout<<i<<' ';
        }
        cout<<1<<'\n';
    }
   }
    return 0;
}