#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(a<b && b<c){
    cout<<"STAIR"<<'\n';
}
else if(a<b && b>c){
    cout<<"PEAK"<<'\n';
}
else{
    cout<<"NONE"<<'\n';
}
}
return 0;
}