// Prefix to Postfix conversion

#include <bits/stdc++.h>
using namespace std;

bool isOperator(char x)
{
    switch (x) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            return true;
    }
    return false;
}

string PrefixPostfix(string exp)
{
    stack<string>s;
    int l = exp.size();
    for(int i = l-1; i >=0; i--)
    {
        if(isOperator(exp[i]))
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = op1+op2+exp[i];
            s.push(temp);
        }
        else
            s.push(string(1,exp[i]));
    }
    return s.top();
}

int main()
{
    string exp = "*-A/BC-/AKL";
    cout << "PostFix Conversion : "<< PrefixPostfix(exp) << endl;
    return 0;
}