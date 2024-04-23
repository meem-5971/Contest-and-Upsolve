#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    string a="",b="";
    //a+=s[0];
    bool flag=false;
    ll n=s.size();
    for(ll i=0;i<(s.size()/2);i++){
     a+=s[i];
     b=s.substr(i+1,s.size());
     if(b[0]!='0' && stoll(b)>stoll(a)){
        cout<<a<<' '<<b<<'\n';
        flag=true;
        break;
     }
    }
    if(flag==false){
        cout<<-1<<'\n';
    }
   }
    return 0;
}