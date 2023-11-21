#include<bits/stdc++.h>
#define ll long long
const int mod=(int)(1e9+7);
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ans=1;
    for(int i=0;i<n;i++){
        ans*=2;
        ans%=mod;
    }
    cout<<ans;
}
