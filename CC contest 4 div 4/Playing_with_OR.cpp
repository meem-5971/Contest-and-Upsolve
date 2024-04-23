#include<bits/stdc++.h>
#define ll long long
using namespace std;
  

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int odd=0;
    int even=0;
    int cnt=0;
    bool flag=false;
     for(int i=0;i<n-k+1;i++){
       flag=false;
        for(int j=i;j<i+k;j++){
         if(1 & a[j]){
            flag=true;

            break;
         }
         
        
        }
       if(flag==true){
        cnt++;
       }
     }
      cout<<cnt<<endl;
   }
    return 0;
}