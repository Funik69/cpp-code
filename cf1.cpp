#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x;
    while(t--){
        int n;
        cin>>n;
        if(n%3==1){
            x=n%3+1;
        }
        else if(n%3==0)
        x=n/3;

        if(n==1 || n==-1){
            cout<<"2"<<endl;
        }
        else
        cout<<x<<endl;
    }
}