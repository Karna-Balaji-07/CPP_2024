#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>deque1;
    deque1.push_back(107);
    deque1.push_back(106);
    deque1.push_back(105);
    deque1.push_back(104);
    deque1.push_back(103);
    deque1.push_back(102);
    deque1.push_back(101);
    cout << "Dequeue Elements" << endl;
    for(int i : deque1)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "Front element : " << deque1.front() << endl;
    cout << "Last element : " << deque1.back() << endl;

    deque1.pop_front();
    deque1.pop_back();
    for(int i : deque1)
        cout << i << " ";
    cout << endl;


}