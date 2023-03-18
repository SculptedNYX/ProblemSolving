#include <iostream>
#include <stack>
using namespace std;

string isTangled(string s);

int main()
{   
    string s;
    cin >> s;
    cout << isTangled(s);
    return 0;
}

string isTangled(string s) {

    stack<char> evalStack;

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '+':
            if((!evalStack.empty()) && (evalStack.top() == '+'))
            {
                evalStack.pop();
            }
            else
            {
                evalStack.push(s[i]);
            }
            break;
        case '-':
            if((!evalStack.empty()) && (evalStack.top() == '-'))
            {
                evalStack.pop();
            }
            else
            {
                evalStack.push(s[i]);
            }
            break;
        default:
            break;
        }
    }
    return evalStack.empty() ? "Yes" : "No";
}