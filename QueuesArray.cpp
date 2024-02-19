// Implementation of queues

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q ;
    queue<int>cq;

    q.push(17);
    q.push(16);
    q.push(15);
    q.push(14);
    q.push(13);
    q.push(12);
    q.push(11);
    cq = q;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << cq.size() << endl;
    cout << cq.empty() << endl;
    cq.pop();
    cout << cq.front() << endl;
    cout << cq.back() << endl;

    return 0;
}
