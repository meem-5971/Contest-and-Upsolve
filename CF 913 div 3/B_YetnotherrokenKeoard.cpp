#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){

   int t;
   cin>>t;
   
   while(t--){
 //cin.ignore();
     string s;

       cin>>s;

      ll n=s.size();
      vector<char>sa;
      vector<char>sc;
      map<int,char>mp;

      for(ll i=0;i<s.size();i++){
       
         if(s[i]=='B'){
            mp[s[i]]++;
           
             if(!sc.empty()){
                
            mp[sc.back()]++;
             sc.pop_back();
            // mp[c]++; 
            }
           
          
            
         }
        else if(s[i]=='b'){
            mp[s[i]]++;;
            
            if(!sa.empty()){
            mp[sa.back()]++;
             sa.pop_back(); 
            }
            
           
         }
         else{
            if(s[i]>='A' && s[i]<='Z' ){
            mp[s[i]]=0;
            sc.push_back(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            mp[s[i]]=0;
            sa.push_back(s[i]);
        }
         }
        
      }
      
         string ans="";
         bool flag=false;
      for(ll i=0;i<s.size();i++){
        if(mp[s[i]]==0){
          ans+=s[i];
          flag=true;
        }
        
      }
   
      if(flag){
       cout<<ans<<'\n';
        
      }
      else{
        
        cout<<' '<<'\n';
      }
   }
    return 0;
}