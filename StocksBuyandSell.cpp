// Stock buy and sell

#include <bits/stdc++.h>
using namespace std;

int profit(vector<int> &arr, int n)
{
    int maxi = 0;
    int sub = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] > arr[i])
                sub = arr[j] - arr[i];
            if(sub > maxi)
                maxi = sub;
                //maxi = max(arr[j]-arr[i],maxi);
        }
    }
    return maxi;
}

int Profit(vector<int> &arr, int n)
{
    int maxi = -1;
    int mini = 1000000;
    int sub;

    for(int i=0;i<n;i++)
    {
        if(arr[i]< mini)
            mini = arr[i];
        sub = arr[i]-mini;
        if(sub > maxi)
            maxi = sub;
    }
    return maxi;
}

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    int res = profit(arr,n);
    int result = Profit(arr,n);
    cout << result << endl;
    cout << res << endl;
    return 0;
}