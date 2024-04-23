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
    string s1,s2;
    cin>>s1>>s2;
    int pos=n-1;
    for(int i=0;i<n-1;i++){
        int up=s1[i+1]-'0';
        int down=s2[i]-'0';
        if((up==1) && (down==0)){
            pos=i;
            break;
        }
    }
    string ans="";
   
    int t=0;
    for(int i=0;i<=pos;i++){
       ans+=s1[i];
    }
    for(int i=pos;i<n;i++){
        ans+=s2[i];
    }
    for(int i=pos;i>0;i--){
        int up=s1[i]-'0';
        int down=s2[i-1]-'0';
        if(up==down){
            t++;
        }
        else{
            break;
        }
    }
  //  if(s2[0]=='0') t++;
    cout<<ans<<'\n'<<t+1<<'\n';
  } 
    return 0;
}