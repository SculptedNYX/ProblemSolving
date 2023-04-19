#include <queue>

using namespace std;

class MyStack {
public:

    queue<int> scuffedStack;
    
    void push(int x) {
        scuffedStack.push(x);
        int size = scuffedStack.size()-1;
        for(int i=0;i<size;i++){
            scuffedStack.push(scuffedStack.front());
            scuffedStack.pop();
        }
    }
    
    int pop() {
        int value = top();
        scuffedStack.pop();
        return value;
    }
    
    int top() {
        return scuffedStack.front();
    }
    
    bool empty() {
        return scuffedStack.empty();
    }
};

int main()
{
    return 0;
}