#include<bits/stdc++.h>
#define ll long long
const int mod= (int)(1e9+7);
using namespace std;
int main(){
  ll n;
  cin>>n;
  ll sum=0;
  while(n/5>0){
      sum+=n/5;
      n/=5;
  }
  cout<<sum;
}
