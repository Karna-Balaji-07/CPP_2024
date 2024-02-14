// Majority element that occurs  more than n/2 times

// Moore's Voting Algorithm

#include <bits/stdc++.h>
using namespace std;

int  majority(vector<int>arr)
{
    int n = arr.size();
    int count = 0;
    int element;

    for(int i=0;i<n;i++)
    {
        if(count == 0){
            count = 1;
            element = arr[i];
        }
        else if(arr[i] == element)
            count++;
        else
            count--;
    }

    int cnt1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == element)
            cnt1++;
    }

    if(cnt1 > (n/2))
        return element;
    return -1;
}

int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};
    int res = majority(arr);
    cout << "The majority element in the array : " << res;
    return 0;
}
