#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    ll s1=0,s2=0;
    ll flag=0;
   
    
    
         for(auto el:mp){
            s1+=(el.second%2==0);
            s2+=(el.second%2!=0);
        
        }
        if(k<(s2-1)){
 cout<<"NO"<<endl;
 continue;
   }
   
    cout<<"YES"<<endl;
   
      
    }
// cout<<s1<<" "<<s2<<" "<<k<<endl;
   
   
    return 0;
}