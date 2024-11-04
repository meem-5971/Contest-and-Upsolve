#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
unordered_map<int,vector<int>>mp;

ll sum=0;
for(int i=0;i<k;i++){
    int x,y;
    cin>>x>>y;
    mp[x].push_back(y);
}
// sort(cost.begin(),cost.end());
vector<ll>brand_total;
for(auto u:mp){
    ll tot=0;
    vector<ll>cost;
    for(auto v:u.second){
     cost.push_back(v);
    }
    sort(cost.begin(),cost.end());

    for(auto x:cost){
        tot+=x;
        
    }
  brand_total.push_back(tot);
}

sort(brand_total.begin(),brand_total.end(),greater<ll>());

for(int i=0;i< min(n,(int)brand_total.size());i++){
    sum+=brand_total[i];
}
cout<<sum<<endl;

}
return 0;
}