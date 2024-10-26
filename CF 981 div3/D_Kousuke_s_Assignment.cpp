#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<ll,int>mp;
    mp[0]=-1;
    ll sum=0;
    int id=-1;
    int cnt=0;

    //prefix sum
    for(int i=0; i<n; i++){
        sum+=a[i];
        if(mp.count(sum) && mp[sum]>=id){
            id=i;
            cnt++;
        }
        mp[sum]=i;

}
cout<<cnt<<endl;
}
return 0;
}