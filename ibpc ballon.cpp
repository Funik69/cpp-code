#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   int sum=0;
   sort(s.begin(),s.end());
   for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
        sum=sum+1;
    }
    if(s[i]!=s[i+1]){
        sum=sum+2;
    }
   }
   cout<<sum;
}
