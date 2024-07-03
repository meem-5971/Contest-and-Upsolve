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
vector<int>a(n);
map<int,int>mp;
for(int i=0; i<n; i++){

cin>>a[i];
// Storing the frequency
mp[a[i]]++;
}
vector<int>v;
//creating the frequency vector
for(auto u:mp){
    v.push_back(u.second);
}
//Alice can eat maximum sz number of cakes
int sz=v.size();
 
//Dynamic Transition
vector<vector<int>> dp(sz, vector<int>(sz+1, -1)); //initialize dp with -1

 dp[0][1]=1; //Alice will eat one cake from first tastiness
    for(int i=1; i<sz; i++){
        for(int j=1; j<=sz; j++){
            dp[i][j] = -1; //dp[i][j] is Bob's kingdom, so it is -1 to keep Alice away
            if(dp[i-1][j-1]!=-1) dp[i][j]=dp[i-1][j-1]+1; //if Alice can eat, Bob let Alice eat
            if(dp[i-1][j]>=v[i]){ //Bob has the chance to eat all cake of one tastiness
                if(dp[i][j]==-1) dp[i][j] = dp[i-1][j]-v[i]; //if Alice can not eat, Bob eats them all
                else dp[i][j] = max(dp[i][j], dp[i-1][j]-v[i]); //if Alice can eat, Bob considers between eating all or letting Alice eat
            
            }
        }
    }

int ans=-1;
 // find the maximum number of cakes Alice can eat
    for(int i=1; i<=sz; i++){
        if(dp[sz-1][i]!=-1){
            ans=i;
            break;
        }
    }
    cout<<ans<<'\n';


}
return 0;
}