#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        vector<ll>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>x){
                x=a[i]; 
            }
            else{
                int flag=1;
                int p=a[i];
                while(a[i]<=x){
                    a[i]=p*flag;
                    flag++;
                }
                x=a[i];
            }
            cout<<x<<' ';
        }
        cout<<x<<'\n';
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
while(t--){
    solve();
}

    return 0;
}