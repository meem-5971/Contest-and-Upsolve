#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            cnt1++;
        }
        else if (s[i] == 'B')
        {
            cnt2++;
        }
    }
    if (cnt2 == k)
    {
        cout << 0 << '\n';
        return;
    }
    else
    {
        if (cnt2 < k)
        {
            
            int cnt3=k-cnt2;
            if(cnt2==0){
                cout << 1 << '\n';
                cout<<k<<" "<<"B"<<'\n';
            }
            else{
              int j=0;
              int t=0;
              for(int i=0;i<n;i++){
                if(t+cnt2==k){
                    break;
                }
                if(s[i]=='A'){
                   t++;
                }
                
              }
              cout << 1 << '\n';
                cout<<t<<" "<<"B"<<'\n';
              
            }
        }
        else if (cnt2 > k)
        {
            cout << 1 << '\n';
            int cnt3 = 0;
            int j=0;
            for (int i = n - 1; i >= 0; i--)
            {    j++;
                if (s[i] == 'B')
                {
                    cnt3++;
                }
                if (cnt3 == k)
                {
                    break;
                }
            }
            if(j==n) cout<<n<<" "<<"A"<<'\n';
            else cout<<n-j<<" "<<"A"<<'\n';
 
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
