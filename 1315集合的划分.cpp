//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int f(int n,int k){
    if(k==1)return 1;
    if(k>n) return 0;
    else if(k==n) return 1;
    else {
        return f(n-1,k-1)+k*f(n-1,k);
    }
}
signed main(){
    int n,k;
    cin >> n >> k;
    cout<<f(n,k);
}
