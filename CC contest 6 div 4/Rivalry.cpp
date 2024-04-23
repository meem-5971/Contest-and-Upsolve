#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int a,b;
   cin>>a>>b;
   int x,y;
   cin>>x>>y;
   int d1=a-(-1*x);
   int d2=b-(-1*y);
   if(d1>d2){
    cout<<"Dominater"<<'\n';
   }
   else{
    cout<<"Everule"<<'\n';
   }
    return 0;
}