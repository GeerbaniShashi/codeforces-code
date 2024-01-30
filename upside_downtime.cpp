#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	string s;
	cin>>s;
	ll n = s.length();
	if(s[0]=='0' || s[n-1]=='0') cout<<"NO"<<endl;
	else {
	    ll count = 0;
	    for(ll i=0; i<n; i++) {
	        if(s[i]=='0' || s[i]=='1' || s[i]=='6' || s[i]=='8' || s[i]=='9') count++;
	    }
	    if(count == n) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
S