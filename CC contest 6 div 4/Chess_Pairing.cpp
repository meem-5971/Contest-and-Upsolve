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
    int n,x;
    cin>>n>>x;
    if(x==0 || n==x){
        cout<<0<<'\n';
    }
    else if(x==(2*n)){
        cout<<x<<'\n';
    }
    else if(x<n){
        cout<<ceil(x/2)<<'\n';
    }
    else{
       cout<<n<<'\n';

    }
   }
    return 0;
}