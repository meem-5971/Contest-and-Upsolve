#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n; 
     int a[n];
     vector<int>v;
     vector<int>v2;
   
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            v2.push_back(a[i]);

        }
     } 
     if( v2.size()%2!=0){
        cout<<-1<<'\n';
        return;
     }  
     sort(a,a+n);
     int i=0;
     for(int j=n-1;j>(n/2-1);j--){
        v.push_back((a[i]+a[j])/2);
        v.push_back(abs(a[i]-a[j])/2);
        i++;
       
     }
    
     for(auto u:v){
        cout<<u<<" ";
     }
     cout<<'\n';
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