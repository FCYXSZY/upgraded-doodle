//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
using namespace std;
//中序ACGDBHZKX，后序CDGAHXKZB，首先可找到主根B；
//中序遍历分为ACGD和HZKX两棵子树，
//后序遍历分为CDGA和HXKZ两棵子树，
//再递归中序遍历ACGD和后序遍历CDGA，
//可找到主根A……
//依次递归输出根，即为前序遍历。
void beford(string in,string after){
    if (in.size()>0){
        char ch=after[after.size()-1];
        cout<<ch;//找根输出
        int k=in.find(ch);
        beford(in.substr(0,k),after.substr(0,k));
        beford(in.substr(k+1),after.substr(k,in.size()-k-1));//递归左右子树；
    }
}
int main(){
    string inord,aftord;
    cin>>inord;cin>>aftord;//读入
    beford(inord,aftord);cout<<endl;
    return 0;
}