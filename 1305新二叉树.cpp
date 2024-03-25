//
// Created by HyperDry on 2024/3/25.
//
#include <bits/stdc++.h>
using  namespace  std;
typedef struct node{
    char date;
    int lt=0,rt=0;
}node;
int t;
int cnt=0;
map<char,int>mp;
vector<node> tree(30);

int creat(char x){
    node node1;
    node1.date=x;
    cnt++;
    tree[cnt]=node1;
    return cnt;
}

void qian(int root){
    cout<<tree[root].date;
    if(tree[root].lt)
    qian(tree[root].lt);
    if(tree[root].rt)
    qian(tree[root].rt);
}
int main(){
    cin>>t;
    char root;
    for (int i=1;i<=t;i++) {
        char ch1, ch2, ch3;
        cin >> ch1 >> ch2 >> ch3;
        getchar();
        int x1, x2, x3;
        if (!mp[ch1]) {
            mp[ch1] = creat(ch1);
            if(i==1) root=ch1;
        }
        if (ch2 != '*')
            if (!mp[ch2]) {
                mp[ch2] = creat(ch2);
                tree[mp[ch1]].lt = mp[ch2];
            }
        if (ch3 != '*')
            if (!mp[ch3]) {
                mp[ch3] = creat(ch3);
                tree[mp[ch1]].rt = mp[ch3];
            }
    }
    qian(mp[root]);
}