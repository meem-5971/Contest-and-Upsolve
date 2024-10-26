#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n+1);
   
    for(int i=1; i<=n; i++){
    cin>>a[i];
    }
    int ans=0;
    for(int i=(n/2)+1;i>=1;i--){
        if(a[i]==a[i+1] || (a[n+1-i]==a[n-i])){
            swap(a[i],a[n-i+1]);
        }

    }
    for(int i=1; i<n; i++){
      if(a[i]==a[i+1]) ans++;
    }

    cout<<ans<<endl;
    // cout<<70<<endl;
}
return 0;
}