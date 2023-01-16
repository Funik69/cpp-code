#include <bits/stdc++.h>
using namespace std;

long long dp[1000][100000];

long long solve(long long coin[],long long n,long long sum){
    if(sum==0){return 1;}
    if(n==0 && sum>0){return 0;}

    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }

    if(coin[n-1]>sum){
        return dp[n][sum]=solve(coin,n-1,sum);
    }

return dp[n][sum]=solve(coin,n-1,sum) + solve(coin,n,sum-coin[n-1]);   
}

 int main(){
   
    memset(dp,-1,sizeof(dp));
    long long coin[]={1,2,3,5,100,105,1001,6002,10000,3563,373,9238,5000,100,25,30,50};
    long long sum=100;
    long long n=17;
    cout<<solve(coin,n,sum);
}

