// Maximum subarray in an arrary

// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;

int subarray(int arr[], int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j = i;j < n;j++){
            sum += arr[j];
            maxi = max(sum,maxi);}



    }
    return maxi;
}

int subArray(int arr[], int n)
{
    int maxi = -1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum > maxi)
            maxi = sum;
        if(sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{

    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = subarray(arr,n);
    int result = subArray(arr,n);
    cout << result << endl;
    cout << res << endl;
    return 0;
}