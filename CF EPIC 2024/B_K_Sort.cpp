#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
 vector<ll>a(n);
 for(int i=0;i<n;i++){
 cin>>a[i];
 }
 ll t=a[0];
 vector<ll>b(n);
 for(int i=1;i<n;i++){
  t=max(t,a[i]);
  if(t>a[i]){
    b.push_back(t-a[i]);

  }
 }
 sort(b.begin(),b.end());
 ll res=b[b.size()-1];
 ll m=b.size();
 ll p=0;
 for(int i=0;i<m;i++){
  res+=(b[i]-p)*(m-i);
  p=b[i];
 }
 cout<<res<<endl;
}
return 0;
}