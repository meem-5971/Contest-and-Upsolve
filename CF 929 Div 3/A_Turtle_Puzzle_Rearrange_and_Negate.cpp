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
    ll sum=0;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=abs(a[i]);
    }
    cout<<sum<<'\n';
   }
    return 0;
}