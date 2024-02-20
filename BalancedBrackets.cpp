// Check for Balanced Brackets

#include <bits/stdc++.h>

using namespace std;

bool isBalanced(string exp)
{
    stack <char> s;
    int length = exp.length();
    for(int i=0;i<length;i++)
    {
        if(s.empty())
            s.push(exp[i]);
        else if((s.top()=='(' && exp[i] == ')')||
                (s.top()=='(' && exp[i] == ')')||
        (s.top()=='(' && exp[i] == ')'))
            s.pop();
        else
            s.push(exp[i]);
    }
    if(s.empty())
        return true;
    return false;

}

int main()
{
    string exp = "{}}{()";
    if(isBalanced(exp))
        cout <<"Balanced" << endl;
    else
        cout << "Not Balanced" << endl;
    return 0;
}