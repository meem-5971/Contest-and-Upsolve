#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int p,q;
    cin>>p>>q;
    if(p/q>=20){
        cout<<20<<endl;
    }
    else{
        cout<<p/q<<endl;
    }
   }
    return 0;
}