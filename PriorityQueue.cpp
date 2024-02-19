#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    int arr[6] = {10,2,4,8,6,9};
    for(int i=0;i<6;i++)
    {
        pq.push(arr[i]);
    }

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}