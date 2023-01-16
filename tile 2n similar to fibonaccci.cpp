#include <bits/stdc++.h>
using namespace std;

int tile(int n){
    if(n==0 || n==1){
        return n;
    }

    return tile(n-1) + tile(n-2);
}

int main(){
int n;
cin>>n;
cout<<tile(n);
}