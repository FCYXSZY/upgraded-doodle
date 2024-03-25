//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
using  namespace  std;
int f(int m,int n){
    if(m==1||n==1)return 1;

    if(m>n) return f(m,n-1)+f(m-n,n);
    else if (m==n) return f(m,n-1)+1;
    else {
        return f(m,m);
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        cout<<f(m,n);
    }
}