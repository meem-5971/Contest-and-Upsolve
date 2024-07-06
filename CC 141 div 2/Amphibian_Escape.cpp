#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;
cin>>t;
while(t--){
ll n,k,h;
cin>>n>>k>>h;

ll cnt=0;

//checking all a,b
for(int i=1;i<=n;i++){ //i=a

 // if a is greater than height, any b will work, all numbers within range will create pairs
    if(i>=h){
        cnt+=n;
    }
    else{
 //b is taking from the remaining height after choosing a
        ll b=((k*i)-h)/(k-1);

        //ensuring that b is in range
        if(b>0){
            cnt+=min(b,n);
        }
    }
}
cout<<cnt<<endl;

}
return 0;
}