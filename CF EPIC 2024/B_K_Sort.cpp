#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    map<int, int> mp;
    int tot = 0; // How many values need to be increased
    for (int i = 1; i < n; i++)
    {
      if (a[i] < a[i - 1])
      {
        mp[a[i - 1] - a[i]]++;
        tot++;
        a[i] = a[i - 1];
      }
    } // O(nlogn)
    int ans = 0, x = 0;
    for (auto p : mp)
    {
      ans += (p.first - x) * (tot + 1);
      tot -= p.second; // Removing the elements for which the difference has become 0
      x = p.first;     // updating least difference
    } // O(n)
    cout << ans << '\n';
  }
  return 0;
}