#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    char a[5];
    for(int i=1;i<5;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=2;i<5;i++){
        if(a[i]!='0'){
            if(a[i]==a[i-1]){
                ans++;
            }
            else if(a[i-1]=='0'){
                ans+=(abs((a[i]-'0')-(a[i-1]-'0'+10)))+1;
            }
            else{
              ans+=(abs((a[i]-'0')-(a[i-1]-'0')))+1;
            }
           
           // cout<<ans<<"A"<<endl;
        }
         if(a[i]=='0'){
             if(a[i]==a[i-1]){
                ans++;
            }
            else{
            ans+=(abs((a[i]-'0'+10)-(a[i-1]-'0')))+1;
           // cout<<ans<<endl;
            }
        }
    }
    if(a[1]=='0'){
        cout<<ans+10<<endl;
    }
    else{
    cout<<ans+(a[1]-'0')<<endl;
    }
   }
    return 0;
}