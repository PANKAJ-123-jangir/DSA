#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;

    // 1. insert
    m[1] = "Apple";
    m[3] = "Mango";
    m[2] = "Banana";

    m.insert({4, "Grapes"});

    cout << "Map elements (key -> value):" << endl;
    for(auto x : m){
        cout << x.first << " -> " << x.second << endl;
    }

    // 2. access
    cout << "Value at key 2 = " << m[2] << endl;

    // 3. size
    cout << "Size = " << m.size() << endl;

    // 4. find
    if(m.find(3) != m.end())
        cout << "Key 3 found" << endl;
    else
        cout << "Key 3 not found" << endl;

    // 5. erase
    m.erase(1);

    cout << "After erase key 1:" << endl;
    for(auto x : m){
        cout << x.first << " -> " << x.second << endl;
    }

    // 6. empty
    cout << "Is map empty? " << m.empty() << endl;

    // 7. clear
    m.clear();
    cout << "After clear, size = " << m.size() << endl;

    return 0;
}
