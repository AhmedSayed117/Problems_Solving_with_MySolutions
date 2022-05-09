//https://codeforces.com/contest/734/problem/A
#include <iostream>
using namespace std;

int main() {
    int n,CA=0,CD=0;char *arr;
    cin>>n;
    arr = new char[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        (arr[i]=='D')? CD++:CA++;
    }
    if(CD>CA)
        cout<<"Danik\n";
    if(CD<CA)
        cout<<"Anton\n";
    if(CD==CA)
        cout<<"Friendship\n";
    delete []arr;
    return 0;
}
