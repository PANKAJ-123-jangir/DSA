#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    // 1. push
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element = " << s.top() << endl;

    // 2. pop
    s.pop();   // removes 30

    cout << "After pop, top = " << s.top() << endl;

    // 3. size
    cout << "Size = " << s.size() << endl;

    // 4. empty
    cout << "Is stack empty? " << s.empty() << endl;

    // Print stack elements
    cout << "Stack elements: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}
