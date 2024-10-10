//prefix sum

#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
int n,d,k;
cin>>n>>d>>k;

vector<int>a(n+1),b(n+1);

for(int i=0;i<k;i++){
    int x,y;
    cin>>x>>y;
    a[x]++;
    b[y]++;
}
for(int i=0;i<n;i++){
    a[i+1]+=a[i];
    b[i+1]+=b[i];
}

int mx=0, mn=1e5;
int bro=0,mom=0;

for(int i=d;i<=n;i++){
int cur=a[i]-b[i-d];
if(cur>mx){
mx=cur;
bro=i-d+1;
}
if(cur<mn){
    mn=cur;
    mom=i-d+1;
}
}
cout<<bro<<" "<<mom<<endl;

}
return 0;
}