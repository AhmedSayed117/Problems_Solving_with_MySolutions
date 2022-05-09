//https://codeforces.com/contest/112/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1,str2;
    cin>>str1>>str2;
    for (int i = 0; i < str1.size(); i++)
    {
        if(str1[i]>=65 && str1[i]<=90) str1[i]+=32;
        if(str2[i]>=65 && str2[i]<=90) str2[i]+=32;
    }

    if (str1==str2)cout<<"0\n";
    if (str1>str2)cout<<"1\n";
    if (str1<str2)cout<<"-1\n";
    return 0;
}