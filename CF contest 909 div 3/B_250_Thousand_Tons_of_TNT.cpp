#include <bits/stdc++.h>
#define ll long long
#define forI(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;
    cin >> n;
    ll a[n];
    ll i;
    forI(i, 0, n) cin >> a[i];
    
    vector<int>v;
  for(int i=1;i*i<=n;i++){
     if (n % i == 0)
            {
                v.push_back(i);
                if ((n / i) != i) {
                    v.push_back(n / i);
                }
            }
  }
    
    ll ans=0;
   ll mnsum;
   ll mxsum;
   vector<ll>sm;
   ll s=0;
    for(ll k=0;k<v.size();k++){
        
        s=0;
           ll nxt =1;
        for(int j=0;j<n;j++){
            
        
         s+=a[j];
      
                if (nxt == v[k])
                {
                    sm.push_back(s);
                    s = 0;
                    nxt = 1;
                    continue;
                }
                nxt++;
    
    }
    sort(sm.begin(),sm.end());
     mxsum=sm[sm.size()-1];
     mnsum=sm[0];
     sm.clear();
   
   // cout<<mxsum<<" "<<mnsum<<'\n';
    
    
    ans=max(ans,(mxsum-mnsum));
        }
     
     cout<<ans<<'\n';
    }
    
    return 0;
}