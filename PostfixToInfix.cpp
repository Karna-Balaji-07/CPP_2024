// Postfix to Infix conversion

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperand(char x)
{
    return (x >= 'a' && x <= 'z') ||
           (x >= 'A' && x <= 'Z');
}

string PostfixInfix(string  exp)
{
    stack<string> s;
    int len = exp.size();
    for(int i = 0;exp[i] != '\0';i++) {
        if (isOperand(exp[i])) {
            string op(1,exp[i]);
            s.push(op);
        }
        else {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = "(" + op1 + exp[i] + op2 + ")";
            s.push(temp);
        }
    }
    return s.top();
}

int main()
{
    string exp = "xyae+/%";
    cout << "Infix conversion : "<< PostfixInfix(exp) << endl;
    return 0;
}

//
//#include <bits/stdc++.h>
//using namespace std;
//bool isOperand(char x) {
//    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
//}
//string infixConversion(string postfix) {
//    stack<string> infix;
//    for (int i=0; postfix[i]!='\0'; i++) {
//        if (isOperand(postfix[i])) {
//            string op(1, postfix[i]);
//            infix.push(op);
//        } else {
//            string op1 = infix.top();
//            infix.pop();
//            string op2 = infix.top();
//            infix.pop();
//            infix.push("{"+op2+postfix[i]+op1 +"}");
//        }
//    }
//    return infix.top();
//}
//int main() {
//    string postfix = "xyae+/%";
//    cout<<"The infix conversion of the postfix expression '"<<postfix<<"' is : ";
//    cout<<infixConversion(postfix);
//    return 0;
//}