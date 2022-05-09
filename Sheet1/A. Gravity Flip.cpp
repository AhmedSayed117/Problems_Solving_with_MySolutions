//https://codeforces.com/contest/405/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,*arr;
    cin>>n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}