#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
if(n==1 || k==1){
    if(n==1){
        cout<<1<<endl;
    }
    else if(k==1){
        cout<<n<<endl;
    }
}
else{
    n--;
    cout<<(n*k)+1<<endl;
}
}
return 0;
}