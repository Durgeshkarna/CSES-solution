#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x,y;
        cin>>x>>y;
        if(y>x){
            if(y%2==0)
                cout<<(y-1)*(y-1)+1+(x-1)<<endl;
            else{
                cout<<y*y-(x-1)<<endl;
            }
        }
        else{
            if(x%2==0)
                cout<<x*x-(y-1)<<endl;
            else{
                cout<<(x-1)*(x-1)+1+(y-1)<<endl;
            }
    }
}
}
