#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;

    // 1. push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "After push_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 2. size and capacity
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;

    // 3. front and back
    cout << "Front = " << v.front() << endl;
    cout << "Back = " << v.back() << endl;

    // 4. at()
    cout << "Element at index 2 = " << v.at(2) << endl;

    // 5. insert
    v.insert(v.begin() + 2, 25);
    cout << "After insert: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 6. erase
    v.erase(v.begin() + 1);
    cout << "After erase: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 7. pop_back
    v.pop_back();
    cout << "After pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 8. sort
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 9. reverse
    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 10. empty
    cout << "Is vector empty? " << v.empty() << endl;

    // 11. clear
    v.clear();
    cout << "After clear, size = " << v.size() << endl;

    return 0;
}
