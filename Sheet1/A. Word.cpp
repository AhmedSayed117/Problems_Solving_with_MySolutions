//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;int CC=0,CS=0;
    cin>>s;
    for (char i : s)((i - 0)>=65 && (i - 0)<=90)?CC++:CS++;
    if(CS>=CC) for (char i : s) cout<<(char)tolower(i);
    else for (char i : s) cout<<(char)toupper(i);
    return 0;
}