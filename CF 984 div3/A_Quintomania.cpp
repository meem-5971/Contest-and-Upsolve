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
int n;
cin>>n;
vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
}
bool flag=true;

for(int i=0; i<n-1; i++){
    int r=a[i]-a[i+1];
    if(r==(-5) || r==(-7) || r==5 || r==7){

       flag=true;
    }
    else{
        flag=false;
        break;  // if not consecutive then break the loop and return NO as soon as we find a discrepancy.
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}