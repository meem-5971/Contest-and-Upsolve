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
     ll a,b,l;
     cin>>a>>b>>l;
     ll pa=a,pb=b;
     ll x=1,y=1;
     while(a<l){
        if(l%a==0){
            x++;
        }
        else{
            break;
        }
        a*=pa;
     }
      while(b<l){
        if(l%b==0){
            y++;
        }
        else{
            break;
        }
        b*=pb;
     }
     set<ll>s;
 int t=0;
     for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            ll tmp=pow(pa,i)*pow(pb,j);
            if(tmp<=l && l%tmp==0){
             //  cout<<l/tmp<<' ';
                s.insert(l/tmp);

            }
        }
       
        
     }
     
        cout<<s.size()<<'\n';
     
   }
    return 0;
}