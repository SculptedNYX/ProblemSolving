#include <iostream>
#include <stack>
using namespace std;

void stackProcessor(stack<int> &s);

int main()
{
    stack<int> s;
    stackProcessor(s);
    return 0;
}

void stackProcessor(stack<int> &s)
{
    int operationCount = 0, tmp;
    cin >> operationCount;

    for (int i = 0; i < operationCount; i++)
    {   
        cin >> tmp;
        switch (tmp)
        {
        case 1:
            cin >> tmp;
            s.push(tmp);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            if(!s.empty())
            {
                cout << s.top();
            }
            else
            {
                cout << "Empty!";
            }
            cout << endl;
        default:
            break;
        }
    }
}