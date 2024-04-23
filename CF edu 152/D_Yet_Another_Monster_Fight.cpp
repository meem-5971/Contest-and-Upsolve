#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll mx=*max_element(a.begin(),a.end());
   if(n<=3){
    cout<<mx<<'\n';
    return 0;
   }
   ll cnt;
   for(int i=0;i<n;i++){
     if(abs(a[i]-a[i+1])>2){
        cnt=max(a[i-1],a[i]);
        break;
     }
   }
   cout<<mx+cnt<<'\n';
    return 0;
}