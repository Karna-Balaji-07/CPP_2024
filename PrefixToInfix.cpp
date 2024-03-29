// Prefix to Infix conversion

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

string PrefixInfix(string exp)
{
    stack<string>s;
    int length = exp.size();
    for(int i = length -1; i>= 0; i--)
    {
        if(isOperator(exp[i]))
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = "(" + op1+exp[i]+op2+ ")";
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
    cout << "Infix conversion : "<< PrefixInfix(exp) << endl;
    return 0;
}