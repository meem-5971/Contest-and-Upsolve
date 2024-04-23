#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n,c,d;
cin>>n>>c>>d;
vector<ll>a(n*n);
unordered_map<ll,ll>mp;
for(int i=0;i<n*n;i++){

    cin>>a[i];
    mp[a[i]]++;
    }
    ll mn=*min_element(a.begin(),a.end());
    //cout<<mn<<endl;
   vector<vector<ll>>v(n,vector<ll>(n,0));
    v[0][0]=mn;
    for(int i=0;i<n;i++){
        if(i!=0){
            v[i][0]=v[i-1][0]+c;
        }
        for(int j=0;j<n;j++){
        if(j!=0){
            v[i][j]=v[i][j-1]+d;
        }
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ll x=v[i][j];
            if(mp.find(x)==mp.end()){
               flag=false;
               break;
            }
            else{
                mp[x]--;
                if(mp[x]==0){
                    mp.erase(x);
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
return 0;
}