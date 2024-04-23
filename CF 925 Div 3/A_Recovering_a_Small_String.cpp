#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 while(t--){
   int n;
  cin>>n;
  vector<char>a(27);
  char c='a';
  for(int i=1;i<=26;i++){
    a[i]=c++;
  } 
  if(n<=28){
    int t=n-2;
    cout<<"aa"<<a[t]<<'\n';
  }
  else if(n<=53){
    int t=n-27;
    cout<<'a'<<a[t]<<'z'<<'\n';
  }
  else{
    int t=n-52;
    cout<<a[t]<<"zz"<<'\n';
  }
 }
  
    return 0;
}