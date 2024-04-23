#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        char a[3][3];
        int x=0,y=0,z;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
                if(a[i][j]=='A'){
                  x++;
                }
                if(a[i][j]=='B'){
                  y++;
                }
                if(a[i][j]=='C'){
                  z++;
                }
            }
        }
        
        if(x==2) cout<<'A'<<'\n';
        else if(y==2) cout<<'B'<<'\n';
        else  cout<<'C'<<'\n';
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}