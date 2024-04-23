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
   // cin.ignore();
  // cout<<t<<' ';
    ll n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
   
    int  flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            flag=0;
          char x=a[i];
          if(c[i]!=x){
            cout<<"YES"<<'\n';
            break;
          }
          else{
            cout<<"NO"<<'\n';
            break;
          }
        }
        else{
          if(c[i]==a[i] || c[i]==b[i]){
            flag=0;
             cout<<"NO"<<'\n';
            break;
          }
          else{
            flag++;
          }
        }
    }
    if(flag>0) cout<<"YES"<<'\n';
    

   }
    return 0;
}