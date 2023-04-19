#include <iostream>
#include <queue>
using namespace std;

void queueProcessor(queue<int> &q);

int main()
{
    queue<int> q;
    queueProcessor(q);
    return 0;
}

void queueProcessor(queue<int> &q)
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
            q.emplace(tmp);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            if(!q.empty())
            {
                cout << q.front();
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