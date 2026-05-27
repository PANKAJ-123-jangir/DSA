#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    deque<int> d;

    // 1. push_back
    d.push_back(10);
    d.push_back(20);

    // 2. push_front
    d.push_front(5);
    d.push_front(1);

    cout << "After push_front & push_back: ";
    for(int x : d) cout << x << " ";
    cout << endl;

    // 3. front and back
    cout << "Front = " << d.front() << endl;
    cout << "Back = " << d.back() << endl;

    // 4. pop_front
    d.pop_front();

    // 5. pop_back
    d.pop_back();

    cout << "After pop_front & pop_back: ";
    for(int x : d) cout << x << " ";
    cout << endl;

    // 6. insert
    d.insert(d.begin() + 1, 15);

    cout << "After insert: ";
    for(int x : d) cout << x << " ";
    cout << endl;

    // 7. erase
    d.erase(d.begin());

    cout << "After erase: ";
    for(int x : d) cout << x << " ";
    cout << endl;

    // 8. size
    cout << "Size = " << d.size() << endl;

    // 9. sort
    sort(d.begin(), d.end());

    cout << "After sort: ";
    for(int x : d) cout << x << " ";
    cout << endl;

    // 10. empty
    cout << "Is deque empty? " << d.empty() << endl;

    // 11. clear
    d.clear();
    cout << "After clear, size = " << d.size() << endl;

    return 0;
}
