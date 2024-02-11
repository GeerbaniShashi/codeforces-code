#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin>>n;
    char ch[n][n];
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            cin>>ch[i][j];
        }
    }
    ll count = 0;
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            if(ch[i][j] == 'P' || ch[i][j] == 'p') count++;
        }
    }
    cout<<count<<endl;
    return 0;
}