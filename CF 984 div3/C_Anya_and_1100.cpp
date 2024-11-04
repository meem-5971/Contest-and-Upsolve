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
string s;
cin>>s;
int q;
cin>>q;
int cnt=0;
if(s.size()>=4){
    for(int i=0;i<s.size()-3;i++){
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
            cnt++;
        }
    }
}

while(q--){
int id;
char val;
cin>>id;
cin>>val;
id--;
int n=s.size();

if(n-id>3 && s[id]=='1' && s[id+1]=='1' && s[id+2]=='0' && s[id+3]=='0'){
    cnt--;
}
if((n-id>2 && id >=1)&& s[id-1]=='1' && s[id]=='1' && s[id+1]=='0' && s[id+2]=='0'){
    cnt--;
}
if((n-id>1 && id>=2) && s[id-2]=='1' && s[id-1]=='1' && s[id]=='0' && s[id+1]=='0'){
cnt--;
}
if((n>id && id>=3) && s[id-3]=='1' && s[id-2]=='1' && s[id-1]=='0' && s[id]=='0'){

cnt--;}

s[id]=val;
if(n-id>3 && s[id]=='1' && s[id+1]=='1' && s[id+2]=='0' && s[id+3]=='0'){
    cnt++;
}
if((n-id>2 && id >=1)&& s[id-1]=='1' && s[id]=='1' && s[id+1]=='0' && s[id+2]=='0'){
    cnt++;
}
if((n-id>1 && id>=2) && s[id-2]=='1' && s[id-1]=='1' && s[id]=='0' && s[id+1]=='0'){
cnt++;
}
if((n>id && id>=3) && s[id-3]=='1' && s[id-2]=='1' && s[id-1]=='0' && s[id]=='0'){

cnt++;
}

if(cnt) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
return 0;
}