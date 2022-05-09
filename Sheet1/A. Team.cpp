//https://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std;

int main() {
    int n,**arr,count=0,solvable=0;
    cin>>n;
    arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
                count++;
        }
        if (count>=2)
            solvable++;
        count=0;
    }

    for (int i = 0; i < n; i++)
        delete []arr[i];
    delete []arr;
    cout<<solvable<<"\n";
    return 0;
}