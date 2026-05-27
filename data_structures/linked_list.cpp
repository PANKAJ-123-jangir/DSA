#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    // 1. push_back
    l.push_back(10);
    l.push_back(20);

    // 2. push_front
    l.push_front(5);
    l.push_front(1);

    cout << "After push_front & push_back: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 3. front and back
    cout << "Front = " << l.front() << endl;
    cout << "Back = " << l.back() << endl;

    // 4. pop_front
    l.pop_front();

    // 5. pop_back
    l.pop_back();

    cout << "After pop_front & pop_back: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 6. insert
    auto it = l.begin();
    ++it;   // move to second position
    l.insert(it, 15);

    cout << "After insert: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 7. erase
    it = l.begin();
    l.erase(it);

    cout << "After erase: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 8. remove (removes all matching values)
    l.remove(15);

    cout << "After remove 15: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 9. sort
    l.sort();

    cout << "After sort: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 10. reverse
    l.reverse();

    cout << "After reverse: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 11. size
    cout << "Size = " << l.size() << endl;

    // 12. empty
    cout << "Is list empty? " << l.empty() << endl;

    // 13. clear
    l.clear();
    cout << "After clear, size = " << l.size() << endl;

    return 0;
}
