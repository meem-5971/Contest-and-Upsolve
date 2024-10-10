#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
    int tst;
    cin>>tst;
    while(tst--){
      int t,k;
cin>>t>>k;
bool flag;
int sum=0,cnt=0;
vector<int>v(t);
for(int i=0;i<t;i++){
    cin>>v[i];
}
for(int i=0;i<t;i++){
    if(v[i]>=k){
        sum+=v[i];
        continue;       
    }
    if(v[i]==0 && sum>0){
        cnt++;
        sum--;
    }
}
  cout<<cnt<<endl;
  
    }

return 0;
}