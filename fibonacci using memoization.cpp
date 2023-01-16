#include <bits/stdc++.h>
using namespace std;
long dp[10000000];

long fib(int n){
    if(n==0 || n==1){
        return dp[n]=n;
    }
if(dp[n]!=-1){
    return dp[n];
}
    dp[n]=fib(n-1) + fib(n-2);
    return dp[n];
}

int main (){
    #ifndef ONLINE_JUDGE
freopen(“input.txt”, “r”, stdin);
freopen(“output.txt”, “w”, stdout);
    #endif

    memset(dp,-1,sizeof(dp));
    cout<<fib(7);
}