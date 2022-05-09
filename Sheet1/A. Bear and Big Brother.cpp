//https://codeforces.com/contest/791/problem/A
#include <iostream>
using namespace std;

int main() {
    int W_limak,W_Bob, count = 0;
    cin>>W_limak>>W_Bob;
    while(W_limak<=W_Bob)
    {
        W_limak*=3;
        W_Bob*=2;
        count++;
    }
    cout<<count<<"\n";
    return 0;
}
