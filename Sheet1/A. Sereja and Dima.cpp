//https://codeforces.com/contest/381/problem/A
#include <iostream>
#include <algorithm>
#include "vector"
using namespace std;

int main() {
    int count=1,n,SerejaPoints=0,DimaPoints=0,value,first,last,maxi;
    vector<int>v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        v.push_back(value);
    }
    while (!v.empty())
    {
        first = v.front();last = v.back();
        maxi = max(first,last);
        if (count%2!=0) SerejaPoints+=maxi;
        else DimaPoints+=maxi;
        v.erase(remove(v.begin(), v.end(), maxi), v.end());
        count++;
    }
    cout<<SerejaPoints <<" "<<DimaPoints<<"\n";
    return 0;
}