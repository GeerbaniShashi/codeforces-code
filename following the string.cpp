#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--) {
       ll n;
       cin>>n;
       
       vector<ll>v(26, -1),a(n);
       string s = "";
       for(ll j=0; j<n; j++) {
           cin>>a[j];
       for(char i='a'; i<='z'; i++) {
           if(v[i - 'a'] == a[j]-1) {
               v[i-'a']++;
               s+=i;
               break;
           }
       }
       }
       cout<<s<<endl;
    }
    return 0;
}