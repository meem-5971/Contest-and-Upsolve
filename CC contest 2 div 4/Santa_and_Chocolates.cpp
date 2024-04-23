#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
   long long int n,k;
    cin>>n>>k;
    vector<int>a(n);
    long long int sum=0;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        a.push_back(p);
        sum+=p;
    }
    if(k==0){
            cout<<"NO"<<endl;
           // continue;
          }
    else if(sum==n){
            cout<<"YES"<<endl;
           // continue;
          }
     else if(sum>n){
         
         long long int cnt=0;
         long long int s;
            long long int x=n/2;
           long long int y=n-x;
            cnt=(n+(x*k));
            s=sum-cnt;
            if(s%n==0){
                cout<<"YES"<<endl;
               // continue;
            }
            else{
                cout<<"NO"<<endl;
               // continue;
            }
          }
        
        else{
            cout<<"NO"<<endl;
        }
    
   }
   
    return 0;
}