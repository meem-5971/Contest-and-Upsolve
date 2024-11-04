#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<string>a(n);

for(int i=0;i<n;i++){
   cin>>a[i];
}

int cnt=0;

for(int layer=0;layer<min(n,m)/2;layer++){
vector<int>v;
for(int i=layer;i<m-layer;i++){ //upper row
    v.push_back(a[layer][i]-'0');
}
for(int j=layer+1;j<n-layer-1;j++){ //right column
    v.push_back(a[j][m-layer-1]-'0');
}

for(int i=m-layer-1;i>=layer;i--){ //lower row
    v.push_back(a[n-layer-1][i]-'0');
}

for(int j=n-layer-2;j>=layer+1;j--){//left column
    v.push_back(a[j][layer]-'0');
}

int s=v.size();

for(int i=0;i<s;i++){
    string st;
    for(int j=i;j<i+4;j++){
        st+=v[j%s]+'0';
    }
    if(st=="1543"){
        cnt++;
    }

}

}
cout<<cnt<<endl;
}
return 0;
}