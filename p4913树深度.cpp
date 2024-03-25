//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
using  namespace  std;
const int n=1e6+10;
vector<pair<int,int>> tree(n);
int dep=0;
void bian(int d,int num){
    dep=max(d,dep);
    if(tree[num].first)
    bian(d+1,tree[num].first);
    if(tree[num].second)
    bian(d+1,tree[num].second);
}
int main(){
       int t;cin>>t;
       for(int i=1;i<=t;i++){
           int x,y;
           cin>>x>>y;
           tree[i].first=x;
           tree[i].second=y;
       }
       bian(1,1);
       cout<<dep;
}