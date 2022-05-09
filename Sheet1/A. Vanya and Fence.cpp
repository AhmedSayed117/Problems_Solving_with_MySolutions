//https://codeforces.com/contest/677/problem/A
#include <iostream>
using namespace std;
int main() {
    int n,*arr,h,sum=0;
    cin>>n>>h;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        (arr[i]<=h)?sum+=1:sum+=2;
    }
    cout<<sum;
    delete []arr;
}
