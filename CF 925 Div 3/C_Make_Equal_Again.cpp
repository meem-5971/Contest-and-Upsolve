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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t=0,t1=n-1;
    while(a[t]==a[0]){
        t++;
    }
    while(a[t1]==a[n-1]){
        t1--;
    }
    if(n==1){
        cout<<0<<'\n';
        continue;
    }
    if(a.front()!=a.back()){
        cout<<min(n-t,t1+1)<<'\n';
    }
    else{
        cout<<max(0,t1-t+1)<<'\n';
    }
   }
    return 0;
}