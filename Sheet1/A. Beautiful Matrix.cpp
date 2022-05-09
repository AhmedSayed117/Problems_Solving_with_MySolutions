//https://codeforces.com/contest/263/problem/A
#include <iostream>
using namespace std;
//Note
//2d array with zero based
// solve==> : 1 in position [2][2]
int main() {
    int **arr,posX=0,posY=0,count=0;
    arr = new int*[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = new int [5];
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                posX = i;
                posY = j;
            }
        }
    }
        count+=abs(posY-2);
        count+=abs(posX-2);

    for (int i = 0; i < 5; i++)
        delete []arr[i];
    delete []arr;
    cout<<count<<"\n";
    return 0;
}