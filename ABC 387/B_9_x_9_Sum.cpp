#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x;
cin>>x;
int cnt=0;
for(int i=1;i<=9;i++){
if(x%i==0 && x/i<10){
    cnt++;
}
}
cout<<2025-(cnt*x)<<endl;

 
return 0;
}