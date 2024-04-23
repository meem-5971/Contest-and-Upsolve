#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int x;
  cin>>x;
  while(x--){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j]<=k){
                t++;
            }
        }
    }
    cout<<t<<'\n';
  } 
    return 0;
}