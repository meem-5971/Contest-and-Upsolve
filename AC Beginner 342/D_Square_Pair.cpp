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
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int cnt=0;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        ll res=a[i]*a[j];
        ll d=floor(sqrt(res));
        if(d*d == res){
            cnt++;
        }
    }
   }
   cout<<cnt<<'\n';
    return 0;
}