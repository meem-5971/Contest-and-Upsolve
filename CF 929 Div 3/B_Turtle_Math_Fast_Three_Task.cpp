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
    vector<ll>a(n);
    ll sum=0;
    map<int,int>mp;
    int on=0,two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) on++;
        if(a[i]==2) two++; 
        sum+=a[i];
    }
    ll r=sum%3;
    if(r==0){
        cout<<0<<'\n';
    }
    else if(r==2){
       cout<<1<<'\n';
    }
    else{
        bool flag=true;
       for(int i=0;i<n;i++){
        ll tmp=sum-a[i];
        if(tmp%3==0){
            cout<<1<<'\n';
              flag=false;
            break;
        }
       }
       if(flag){
        cout<<2<<'\n';
       }
    }
    
  } 
    return 0;
}