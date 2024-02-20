// Reverse a Stack
#include <bits/stdc++.h>
using namespace  std;

void reverse(stack<int> &s)
{
    queue<int> q;
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

}

int main()
{
    stack<int> stk;
    stk.push(40);
    stk.push(30);
    stk.push(20);
    stk.push(10);
    reverse(stk);
    while(!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    return 0;
}