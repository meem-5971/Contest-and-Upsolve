#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
int t;

cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
   int ans = 0;
    vector<int> chk(n + 1, 0); // Vector to check visited nodes

    for (int i = 1; i <= n; i++) {
        if (chk[i]) // If already visited, skip
            continue;

        int j = a[i];
        int cnt = 1;
        
        // Traversing the cycle
        while (j != i) {
            chk[j] = 1;
            j = a[j];
            cnt++;
        }
        chk[i] = 1;

        // If cycle length is greater than 2, add to the answer
        if (cnt > 2) {
            ans += (cnt - 1) / 2;
        }
    }
    cout<<ans<<endl;
}
return 0;
}