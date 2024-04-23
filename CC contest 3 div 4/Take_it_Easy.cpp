#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }  
      sort(v.begin(),v.end());
      int x=v[n-1];
      int cnt=0;
      while(x%2==0){
       cnt++;
       x=x/2;
      }
      cout<<cnt;
      if(x%n==0 || x==1 ){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}