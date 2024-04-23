#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,x,z;
        cin>>n>>x>>z;
        vector<ll>a(n);
        vector<int> s;
        map<int,bool>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.push_back(a[i]);
            mp[a[i]]=true;

        }
         
        for (int i = 0; i <n; i++) {
            const int v = s.size();
            for (int t = 0; t < v; t++) {
                if(mp[s[t] +a[i]]==false)
                s.push_back(s[t] +a[i]); //add this element with previous subsets
            }
        }
        for(auto u:s){
            cout<<u<<' ';
        }
        cout<<'\n';

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