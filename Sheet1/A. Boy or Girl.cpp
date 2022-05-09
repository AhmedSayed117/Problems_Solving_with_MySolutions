//https://codeforces.com/contest/236/problem/A
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    set<char >set;string s;
    cin>>s;
    for (char & i : s)set.insert(i);
    (set.size()%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}