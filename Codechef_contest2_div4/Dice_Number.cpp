#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    vector<int>v1;
    vector<int>v2;
    int a[6];
    long long int sum1=0,sum2=0;
    for(int i=0;i<6;i++){
        cin>>a[i];
       
    }
    for(int i=0;i<6;i++){
       
        if(i<3){
            v1.push_back(a[i]);
        }
        else if(i>=3){
            v2.push_back(a[i]);
        }
    }
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());
    int flag=0;
   
    for(int i=0;i<3;i++){
        if(v1[i]>v2[i]){
             flag++;
            cout<<"Alice"<<endl;
            break;
        }
         if(v1[i]<v2[i]){
            flag++;
            cout<<"Bob"<<endl;
            break;
        }
    }
    if(flag==0) cout<<"Tie"<<endl;
    
   }
    return 0;
}