#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int_pow(ll a, ll t) {
    ll res = 1;
    for (int i = 0; i < t; i++) res *= a;
    return res;
}
ll count(ll r){
vector<int>digit;
while(r){
   digit.push_back(r%10);
   r/=10;
}
reverse(digit.begin(),digit.end());
int n=digit.size();
ll res=0;

for(int i=1;i<=n;i++){
   if(i==n){
      res++;
      break;
   }
    res += int_pow(digit[0], n - 1 - i) * min(digit[0], digit[i]);
    if (digit[i] >= digit[0]) break;
}
for (int i = 0; i < n; i++) {
    int mx;
    if (i == 0) {
        mx = digit[0] - 1; // For the first digit, limit to one less than the first digit of `r`
    } else {
        mx = 9; // For all other digits, the maximum digit is 9
    }

    for (int j = 1; j <= mx; j++) {
        res += int_pow(j, n - 1 - i);
    }

}
return res;

}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll l,r;
cin>>l>>r;

cout<<count(r)-count(l-1)<<endl;
 
return 0;
}