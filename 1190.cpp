//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n[75];
signed main(){
    n[1]=1;n[2]=2;n[3]=4;
    for(int i=4;i<=71;i++){
        n[i]=n[i-1]+n[i-2]+n[i-3];
    }
    int x=1;
    while(true){
        int x;
        cin>>x;
        if(x==0)break;
        cout<<n[x]<<endl;
    }
}