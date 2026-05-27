#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    // 1. insert
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);   // duplicate, will not be added

    cout << "Set elements: ";
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    // 2. size
    cout << "Size = " << s.size() << endl;

    // 3. find
    if(s.find(5) != s.end())
        cout << "5 is present\n";
    else
        cout << "5 is not present\n";

    // 4. count
    cout << "Count of 10 = " << s.count(10) << endl;

    // 5. erase
    s.erase(5);

    cout << "After erase 5: ";
    for(int x : s) cout << x << " ";
    cout << endl;

    // 6. empty
    cout << "Is set empty? " << s.empty() << endl;

    // 7. clear
    s.clear();
    cout << "After clear, size = " << s.size() << endl;

    return 0;
}
