#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int numberOfOperations, operationType, k;
    string words;
    cin >> numberOfOperations;

    stack<string> stringStates;
    stringStates.push("");

    for(int i = 0; i < numberOfOperations; i++)
    {
        cin >> operationType;
        switch (operationType)
        {
        case 1:
            cin >> words;
            stringStates.push(stringStates.top() + words);
            break;
        case 2:
            cin >> k;
            if(stringStates.empty()) {break;}
            words = stringStates.top();
            stringStates.push(words.substr(0, words.size() - k));
            break;
        case 3:
            cin >> k;
            if(stringStates.empty()) {break;}
            cout << stringStates.top()[k-1] << endl;
            break;
        case 4:
            if(stringStates.empty()) {break;}
            stringStates.pop();
            break;
        default:
            break;
        }
    }

    return 0;
}
