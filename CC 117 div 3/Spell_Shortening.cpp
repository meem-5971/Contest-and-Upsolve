#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string st="";
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]-'a'>s[i+1]-'a'){
            if(flag){
                st+=s[i];
            }
           flag=true;
        }
        else{
            st+=s[i];
        }

    }
    cout<<st<<'\n';
 }  
    return 0;
}