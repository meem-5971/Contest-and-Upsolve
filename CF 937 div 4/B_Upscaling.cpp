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
for(int i=0;i<n;i++){
int p=2,q=2;
char a='#',b='.';
if(i%2==1){
    a='.';
    b='#';
}
while(p--){
    for(int j=0;j<n;j++){
    q=2;
    while(q--){
        if(j%2==0){
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
    }
    cout<<'\n';
}
}
}
return 0;
}