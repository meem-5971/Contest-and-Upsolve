#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
                vector<vector<int>>edges(n-1,vector<int>(2,-1));
        for(int i=0;i<n-1;i++){
            for(int j=0;j<2;j++){
                cin>>edges[i][j];
            }
        }
        vector<vector<int>>adj(n+1);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        /*vector<int>adj[n+1];
        for(int i=0;i<n;i++){
            int u,v;
            cin>>u,v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }*/
        ll cnt=0;
        for(int i=0;i<=n;i++){
            if(adj[i].size()==1){
              cnt++;
            }
        }
        ll d=cnt/2;
        ll r=cnt%2;
        cout<<d+r<<'\n';
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