//https://codeforces.com/contest/266/problem/A
#include <iostream>
using namespace std;

int main() {
    int n,count=0;char *arr;
    cin>>n;arr=new char[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    for (int i = 0; i < n-1; i++)
        if (arr[i]==arr[i+1])count++;
    cout<<count;
    delete []arr;
    return 0;
}