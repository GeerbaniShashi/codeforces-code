#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--) {
       ll n;
       cin>>n;
       string s;
       cin>>s;
       ll l,r;
       for(ll i=0; i<n; i++) {
           if(s[i]=='B') {
               l = i;
               break;
           }
       }
       for(ll i=n-1; i>=0; i--) {
           if(s[i]=='B') {
               r = i;
               break;
           }
       }
       cout<<r-l+1<<endl;
    }
    return 0;
}