#include <iostream>
#include <stack>
using namespace std;

string isBalanced(string s);

int main()
{   
    cout<< isBalanced("{[()]}") << endl;
    cout<< isBalanced("{[(])}") << endl;
    cout<< isBalanced("{{[[(())]]}}") << endl;
    return 0;
}

string isBalanced(string s) {

    if(s[0] == ')' || s[0] == '}' || s[0] == ']')
    {
        return "NO";
    }
    
    stack<char> evalStack;

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case ')':
            if((!evalStack.empty()) && (evalStack.top() == '('))
            {
                evalStack.pop();
            }
            else
            {
                return "NO";
            }
            break;
        case '}':
            if((!evalStack.empty()) && (evalStack.top() == '{'))
            {
                evalStack.pop();
            }
            else
            {
                return "NO";
            }
            break;
        case ']':
            if((!evalStack.empty()) && (evalStack.top() == '['))
            {
                evalStack.pop();
            }
            else
            {
                return "NO";
            }
            break;
        default:
            evalStack.push(s[i]);
        }
    }
    return evalStack.empty() ? "YES" : "NO";
}