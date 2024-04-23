#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--){
	    ll l,p;
	    cin>>p>>l;
	    double ans=((double)l/(double)p);
	    if((ans*100)>=75) cout<<"YES"<<'\n';
	    else cout<<"NO"<<'\n';
	}

}