#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   if(n<3){
    cout<<"GOLD"<<endl;
   }
   else if(n>=3 && n<6){
     cout<<"SILVER"<<endl;
   }
   else{
    cout<<"BRONZE"<<endl;
   }
    return 0;
}