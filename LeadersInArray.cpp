// LEADERS in array

#include <bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n)
{
    int a[10];
    int maxi = 0;
    int count = 0;
    a[0] = arr[-1];
    for(int i=n-1;i>=0;i--)
    {
        if(maxi < arr[i]) {
            maxi = arr[i];
            count++;
        }
    }

    for(int i=count-1;i>=0;i--)
        cout << a[i] << " ";
}
int main()
{
    int n = 6;
    int arr[] = {10, 22, 12, 3, 0, 6};
    leaders(arr,n);
    return 0;
}