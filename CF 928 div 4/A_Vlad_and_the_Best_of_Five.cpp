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
    string s;
    cin>>s;
    int a=0,b=0;
    for (int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;

        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<'A'<<'\n';
    }
    else{
        cout<<'B'<<'\n';
    }
   }
    return 0;
}