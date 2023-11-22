#include<bits/stdc++.h>
#define ll long long
const int mod= (int)(1e9+7);
using namespace std;
int main(){
    int x=1;
    cin>>x;
    while(x--){
        int a;
        int b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        if(a*2<b)
            cout<<"NO"<<endl;
        else{
            a%=3;
            b%=3;
            if(a>b) swap(a,b);
            if((a==0 and b==0 ) or (a==1 and b==2)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

