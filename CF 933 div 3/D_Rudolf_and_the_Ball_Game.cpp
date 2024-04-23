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
    ll n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,char>>v(m);
    for(int i=0;i<m;i++){
        int y;char c;
        cin>>y>>c;
        v[i]=make_pair(y,c);
        
    }
    set<int>pl;
    pl.insert(x);
    for(int i=0;i<m;i++){
        int y=v[i].first;
        char c=v[i].second;

        set<int>s;
        for(int u:pl){
    if(c=='0'){
        int j=(u+y-1)%n+1;
        //cout<<v;
        s.insert(j);
    }
    else if(c=='1'){
         int j=(u-y-1+n)%n+1;
         //cout<<v;
        s.insert(j);
    }
    else{
     int j=(u+y-1)%n+1;
      int v2=(u-y-1+n)%n+1;
     // cout<<v<<' '<<v2<<'\n';
     s.insert(j);
     s.insert(v2);

    }
        }
        pl=s;
    }
    cout<<pl.size()<<'\n';
    for(int p:pl){
        cout<<p<<' ';
    }
    cout<<'\n';

  } 
    return 0;
}