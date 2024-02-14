// Sort an Array of 0,1,2

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>&arr, int n)
{
    int c0,c1,c2;
    c0 = 0;
    c1 = 0;
    c2 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
            c1++;
        else if(arr[i] == 2)
            c2++;
        else
            c0++;
    }

    for(int i=0;i<c0;i++)
        arr[i] = 0;
    for(int i=c0;i<c1+c0;i++)
        arr[i] = 1;
    for(int i=c1+c0;i<n;i++)
        arr[i] = 2;
}

int main()
{
    cout << "Sort an array of 0,1 and 2" << endl;
    int n = 6;
    vector<int> arr = {0,2,1,2,0,1};
    sortArray(arr,n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";

    return 0;
}