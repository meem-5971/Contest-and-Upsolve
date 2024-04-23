#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9+7;  
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
    string s;
    cin>>s;
    sort(s.begin(),s.end());

   int fq[26]={0};
    
    for(int i=0;s[i]!='\0';i++){
       fq[s[i]-'a']++;
    }
     ll sum=1;
    for(int i=0;i<26;i++){
       sum=(sum*(fq[i]+1))%MOD;
    }
    cout<<sum-1<<'\n';
  } 
    return 0;
}