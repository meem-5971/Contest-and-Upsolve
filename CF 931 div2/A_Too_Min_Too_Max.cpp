/* #include<bits/stdc++.h>
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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll sum=0;
    int i=0,j=n-1,k=1,l=n-2;
    sum=abs(a[i]-a[j])+abs(a[j]-a[k])+abs(a[k]-a[l])+abs(a[l]-a[i]);
    cout<<sum<<'\n';
  } 
    return 0;
} */
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
ll n;
   cin>>n;
   cout<<n;
 }
   
    return 0;
}