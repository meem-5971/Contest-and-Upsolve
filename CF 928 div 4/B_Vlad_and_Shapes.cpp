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
    int t=0;
    vector<int>ans;
    bool f=false;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        t=0;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
              t++;
              
            }
        }
        if(t!=0){
            ans.push_back(t);
        }
        

    }
    sort(ans.begin(),ans.end());
    if(ans[0]==ans[1]){
        cout<<"SQUARE"<<'\n';
    }
    else{
        cout<<"TRIANGLE"<<'\n';
    }
   }
    return 0;
}