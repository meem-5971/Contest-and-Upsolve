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
    char a=s[0];
    int x=s[1]-'0';
    for(int i=1;i<=8;i++){
        if(i!=x){
            cout<<a<<i<<'\n';
        }
    }
    for(char c='a';c<='h';c++){
       if(c!=a){
          cout<<c<<x<<'\n';
       }
    }
   }
    return 0;
}