#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>a(n);
ll sum=0;
for(int i=0; i<n; i++){
cin>>a[i];
sum+=a[i];
}

sort(a.begin(), a.end());
if(n<=2){
    cout<<-1<<endl;
    continue;
}
ll l=0, r=1e18, ans=-1;
while(l<=r){
    ll mid=l+(r-l)/2;
    ll new_sum =sum+mid;
    double avg=(double)new_sum/(n*2.0);

    ll cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]<avg){
            cnt++;
        }
    }
    if(cnt>n/2){
        ans=mid;
        r=mid-1;
    }
    else{
        l=mid+1;
    }
}
cout<<ans<<endl;

}
return 0;
}