#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
       int n;
       cin>>n;
       vector<vector<int>>a(n,vector<int>(n)); 

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cin>>a[i][j];
        }
       }
       int sum=0;
       for(int k=0;k<n;k++){
        int i=0,j=k,mn=0;
        while(i<n && j<n){
          if(a[i][j]<0){
            mn=min(mn,a[i][j]);
          }
          i++,j++;
        }
        sum+=abs(mn); 
       }
       for(int k=1;k<n;k++){
        int i=k,j=0,mn=0;
        while(i<n && j<n){
          if(a[i][j]<0){
            mn=min(mn,a[i][j]);
          }
          i++,j++;
        }
        sum+=abs(mn);
       }
       cout<<sum<<endl;
}
int main(){
int t;
cin>>t;

while(t--){
        solve();
}
return 0;
}