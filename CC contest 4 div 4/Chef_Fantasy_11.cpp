#include <iostream>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
int main() {
    int t; cin>>t;
    while(t--){
   int n, r, per;
   
   cin>>n;
   r=2;
   
   per = fact(n) / fact(n-r);
   cout<< per<<endl;
    }
   
   return 0;
}