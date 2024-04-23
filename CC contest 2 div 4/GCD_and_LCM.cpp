#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    return __gcd(x,y);
}
int lcm(int x,int y){
    return (x*y)/gcd(x,y);
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int x,y,k,b,a;
    cin>>x>>y>>k;
    while(x!=y && k--){
      if(x>y){
       x=gcd(x,y);
      y=lcm(x,y);
      } 
      if(x<y){
        y=gcd(x,y);
        x=lcm(y,x);
      }
      
       
          
   
    }
    
    cout<<x+y<<endl;  
   }
    return 0;
}