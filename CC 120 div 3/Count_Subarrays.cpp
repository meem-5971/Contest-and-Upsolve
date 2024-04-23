 #include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n;
    cin >> n;

    vector<ll>a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    vector<ll>ans(n + 1, 1);
    ll sum = a[0];
    int s= 0;
    
    
    for (int i = 1; i < n; i++) {
      sum += a[i];

      while (sum > n) {
        sum -= a[s++];
      }
      int tmp = s;
      int cur=sum;
      while (i - tmp) {
        ans[cur]++;
        cur -= a[tmp++];
      }
    }

    for (int i = 1; i <= n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
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
