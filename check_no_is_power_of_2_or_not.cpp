#include <bits/stdc++.h>
using namespace std;
bool poweroftwo(int n){
    return ((n && !(n & n-1)));
}

int main{
    cout<<poweroftwo(16);
}