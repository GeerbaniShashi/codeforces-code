#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++) {
            cin>>b[i];
        }
        //vector<ll>v;
        ll v[n];
        for(ll i=0; i<n; i++) {
            v[a[i]-1] = b[i];
        }
        sort(a,a+n);
        //sort(b,b+n,greater<ll>());
        for(ll i=0; i<n; i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(ll i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}