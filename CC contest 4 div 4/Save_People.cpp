#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t; cin>>t;
 while(t--){
      ll n,m;// n rows, m col
   cin>>n>>m;
   ll i,j;
   cin>>i>>j;// cell(i,j) infected
   cout<<max({n * (m - j), n * (j - 1), m * (i - 1), m * (n - i)})<<endl;
 }
 //n * (m - j)-> infected cell ar right ay vaccinated   
 //n * (j - 1)-> infected cell ar left ay vaccinated   
 //m * (i - 1)-> infected cell ar upper  vaccinated   
 //m * (n - i)-> infected cell ar bottom  vaccinated   
    return 0;
}