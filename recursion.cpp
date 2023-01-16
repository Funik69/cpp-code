#include <bits/stdc++.h>
using namespace std;

int fo(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return fo(arr,n,i+1,key);
    }

    int lo(int arr[],int n,int i,int key){
        if(i==n){
            return -1;
        }
        int restarr = lo(arr,n,i+1,key);
        if(restarr!=-1){
            return restarr;
        }
        if(arr[i]==key){
            return i;
        }
        return -1;
    }

int main(){
int arr[]={4,2,1,2,5,2,7};
cout<<fo(arr,7,0,1)<<" ";
cout<<lo(arr,7,0,9);
}
