#include <iostream>
#define ll long long
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int x,y,z;
     cin>>x>>y>>z;
     ll s=x*y;
     ll a1=s/2;
     if(z>a1){
         cout<<"YES"<<'\n';
     }
     else{
         cout<<"NO"<<'\n';
     }
 }
	return 0;
}
