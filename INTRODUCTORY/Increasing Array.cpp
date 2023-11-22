#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    ll x=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if((i+1)!=n){
            if(arr[i]>arr[i+1]){
                    x=abs(arr[i]-arr[i+1]);
                    sum+=x;
                    arr[i+1]=arr[i];
            }
        }
    }
    cout<<sum;
