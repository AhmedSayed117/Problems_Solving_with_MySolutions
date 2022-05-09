//https://codeforces.com/contest/344/problem/A
#include <iostream>
using namespace std;

int main() {
    int n,groups =1;int *arr;
    cin>>n;
    arr = new int [n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    for (int i = 0; i < n-1; i++)// 1 1 1 0 11
        if (arr[i+1] != arr[i]) groups++;
    cout<<groups;
    delete []arr;
    return 0;
}