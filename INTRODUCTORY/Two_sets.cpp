#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==1 || n%4==2){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        if(n%4==3){
            for(int i=2;i<=n/2;i+=2){
                cout<<i<<" "<<n-i<<" ";
            }
            cout<<n;
            cout<<endl;
            cout<<(n/2)+1<<endl;
            for(int i=1;i<=n/2;i+=2){
                cout<<i<<" "<<n-i<<" ";
            }
            
        }
        else{
            for(int i=2;i<=n/2;i+=2){
                cout<<i<<" "<<n-i+1<<" ";
            }
            cout<<n/2<<endl;
            for(int i=1;i<=n/2;i+=2){
                cout<<i<<" "<<n-i+1<<" ";
            }
        }
    }
}
