#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt1++;
        }
        else{
            cnt2++;
        }
         if(abs(cnt1-cnt2)>1) {
            cout<<"NO"<<'\n';
            break;
            return 0;
    }
    
    }
   
     cout<<"YES"<<'\n';
   }
    return 0;
}