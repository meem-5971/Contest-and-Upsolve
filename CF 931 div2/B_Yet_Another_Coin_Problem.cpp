#include <bits/stdc++.h>
using namespace std;
#define ll long long
const unsigned int M = 1000000007;
int main()
{
   
  ll t;
  cin>>t;
  while(t--){
      
   
    ll  s;
    cin >> s;
    //cout<<0;
    vector<ll>w={15,10,6,3,1};
   // cout<<s;
    ll n=w.size();
    ll dp[n + 1][(s + 1)];
    dp[0][0] = 0;
    for (ll i = 1; i <= s; i++)
        dp[0][i] = INT_MAX - 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = min(1 + dp[i][j - w[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
     
        cout << (dp[n][s]) << endl;
  }
    return 0;
}