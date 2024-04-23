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
    int n,q;
    cin>>n;
    vector<int>a(n),p(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    p[n-1]=n;
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[i+1]){
            p[i]=p[i+1];
        }
        else{
            p[i]=i+1;
        }
    }
   /*  for(auto u:p){
        cout<<u<<' ';
    } */
    //cout<<'\n';
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(p[l]>r){
            cout<<-1<<' '<<-1<<'\n';
        }
        else{
            cout<<l+1<<' '<<p[l]+1<<'\n';
        }
    }
   }
    return 0;
}