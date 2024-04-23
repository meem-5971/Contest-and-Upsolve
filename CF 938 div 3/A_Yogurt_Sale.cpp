#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n,a,b;
cin>>n>>a>>b;
int ans=0;
int m=n/2;
if(n%2==0){
    
    ans=min(n*a,m*b);
}
else{
  ans=min(a*n,m*b+a);
}
cout<<ans<<endl;
}
return 0;
}