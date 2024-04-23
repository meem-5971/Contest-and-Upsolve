#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
bool solve(vector<int>&a){
    int n=a.size();
    int  sum=0;
      if(n<=2) return false;
     for(int i=0;i<n;++i){     
        sum+=a[i];
    }

    if( sum%2!=0) return false;

    int mx=*max_element(a.begin(),a.end());
    cout<<sum<<' '<<mx<<'\n';
    if(mx*2 > sum) return false;
    return true;


} 
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
       // sum+=a[i];
    }
   bool flag =true; 
   
   for(ll i=1;i<n-1;i++){ 
        if(a[i-1]!=0){ 
            ll x=a[i-1]; 
            a[i-1]-=abs(x); 
            a[i]-=abs(2*x); 
            a[i+1]-=abs(x); 
        } 
      
    } 
    
    for(ll i=0;i<n;i++){ 
        if(a[i]!=0){ 
            flag=false; 
            break; 
        } 
    } 
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
 }  
    return 0;
}