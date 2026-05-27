#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    // 1. push
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element = " << q.front() << endl;
    cout << "Back element = " << q.back() << endl;

    // 2. pop
    q.pop();   // removes 10

    cout << "After pop, front = " << q.front() << endl;

    // 3. size
    cout << "Size = " << q.size() << endl;

    // 4. empty
    cout << "Is queue empty? " << q.empty() << endl;

    // Print queue elements
    cout << "Queue elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
