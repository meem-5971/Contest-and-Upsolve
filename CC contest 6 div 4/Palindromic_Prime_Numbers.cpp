#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n>4){
        cout<<1<<" "<<n-1<<'\n';
    }
    else{
        cout<<0<<" "<<n<<'\n';
    }
}
    return 0;
}