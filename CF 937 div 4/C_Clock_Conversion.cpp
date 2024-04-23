#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
string t="",t2="";
int f=0;
for(int i=0;i<s.size();i++){
    if(s[i]==':'){
        f++;
    }
    else if(f==0){
        t+=s[i];
    }
    else if(f>0){
     t2+=s[i];
    
    }
}
int hr=stoi(t);
int mn=stoi(t2);
bool ok=true;
if(hr<12 && hr>0){
    cout<<s<<" AM"<<'\n';
}
else if(hr>12){
   cout<<setw(2) << setfill('0')<<hr-12<<":"<<t2<<" PM"<<'\n';
}
else if(hr==12){
    cout<<"12:"<<t2<<" PM"<<'\n';
}
else if(hr==0){
    cout<<"12:"<<t2<<" AM"<<'\n';
}

}
return 0;
}