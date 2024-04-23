#include<bits/stdc++.h>
#define ll long long
using namespace std;
int prime(int n)
{
    
    if (n & 1)
        n -= 2;
    else
        n--;
 
    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }
    
    return 2;
}  
ll isPowerOfTwo(int n)
{  int cnt=0;
    if (n == 0)
        return -1;
    while (n != 1) {
        cnt++;
        if (n % 2 != 0)
            return -1;
        n = n / 2;
    }
    return cnt;
}

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll x=prime(n);
    ll h=n-x;
    ll ans=isPowerOfTwo(h-1);
    if(ans==-1){
        cout<<-1<<'\n';
    }
    else{
        cout<<ans+1<<'\n';
    }
   }
    return 0;
}