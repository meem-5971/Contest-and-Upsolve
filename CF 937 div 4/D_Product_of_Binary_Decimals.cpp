#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
cin>>n;
string s=to_string(n);
if(count(s.begin(), s.end(),'0')+count(s.begin(), s.end(),'1')==s.size()){
    cout<<"YES"<<'\n';
    return;

}

while(n>1){
    ll cnt=0;
    vector<ll>v;
    for(int i=1;i<=sqrt(n);i++){
     if(n%i==0 && i!=n/i){
        v.push_back(i);
        v.push_back(n/i);
     }
     else if(n%i==0 && i==n/i){
     v.push_back(i);
     }
    }
    sort(v.begin(),v.end());
    v.erase(v.begin());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
    string st=to_string(v[i]);
    if(count(st.begin(), st.end(),'0')+count(st.begin(), st.end(),'1')==st.size()){
   n/=v[i];
   cnt=1;
   break;
    }

}
if(cnt==0){
    cout<<"NO"<<'\n';
    return;
}

}
cout<<"YES"<<'\n';
    return;
}
int main(){
int t;
cin>>t;
while(t--){

solve();
}
return 0;
}