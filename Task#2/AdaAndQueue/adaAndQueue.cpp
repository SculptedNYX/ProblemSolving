#include <iostream>
#include <deque>
#include <stack>

using namespace std;

void queueProcessor(deque<int> &q);

int main()
{
    deque<int> q;
    queueProcessor(q);
    return 0;
}

void queueProcessor(deque<int> &q)
{
    int operationCount = 0, value;
    string tmp;
    cin >> operationCount;

    for (int i = 0; i < operationCount; i++)
    {   
        cin >> tmp;

        if(tmp == "back")
        {
            if(q.empty())
            {
                cout << "No job for Ada?";
            }
            else
            {
                cout << q.back();
                q.pop_back();
            }
            cout << endl;
        }
        else if(tmp == "front")
        {
            if(q.empty())
            {
                cout << "No job for Ada?";
            }
            else
            {
                cout << q.front();
                q.pop_front();
            }
            cout << endl;
        }
        else if(tmp == "reverse")
        {
            stack<int> s;

            while(!q.empty())
            {
                s.push(q.front());
                q.pop_front();
            }

            while(!s.empty())
            {
                q.push_back(s.top());
                s.pop();
            }
        }
        else if(tmp == "push_back")
        {
            cin >> value;
            q.push_back(value);
        }
        else if(tmp == "toFront")
        {
            cin >> value;
            q.push_front(value);
        }
    }
}