#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
        vector<ll>v(n);
        int k=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                v[k]=i;
                k++;
            }
        }
        
        if(n==1){
            cout<<1<<" "<<0<<endl;
            return;
        }
        int x=v[0];
        int m=n/x;
        for(int i=1;i<=n;i++){
            for(int j=n;j>0;j--){
                if(((((i^j)==x)) && ((i|j)==m)) || ((((i^j)==m)) && ((i|j)==x))){
                    cout<< i<<" "<<j<<endl;
                    return;
                }
            }
        }
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}