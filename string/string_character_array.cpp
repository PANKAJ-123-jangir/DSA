/*
=====================================================
            C++ STRING & CHARACTER ARRAY NOTES
=====================================================

This program demonstrates:
1. char array vs string
2. Input methods
3. Length
4. Copy
5. Compare
6. Access & modify characters
7. Concatenation / append
8. Substring
9. Find
10. Palindrome logic
11. Alphanumeric check
=====================================================
*/

#include <iostream>
#include <cstring>   // strlen, strcpy, strcmp
#include <string>
#include <cctype>    // isalnum, tolower
using namespace std;

int main() {

    /* =====================================
       1. CHARACTER ARRAY (C-style string)
       ===================================== */

    char c1[50] = "Hello World";
    char c2[50];

    // Length (counts till '\0')
    cout << "char[] length: " << strlen(c1) << endl;

    // Copy (cannot use =)
    strcpy(c2, c1);
    cout << "Copied char[]: " << c2 << endl;

    // Compare (0 means equal)
    if (strcmp(c1, c2) == 0)
        cout << "char[] are equal" << endl;

    // Access & modify
    c1[0] = 'h';
    cout << "Modified char[]: " << c1 << endl;


    /* ==========================
       2. C++ STRING (STL string)
       ========================== */

    string s1 = "Hello World";
    string s2;

    // Length (O(1))
    cout << "\nstring length: " << s1.length() << endl;

    // Copy (one line)
    s2 = s1;
    cout << "Copied string: " << s2 << endl;

    // Compare
    if (s1 == s2)
        cout << "strings are equal" << endl;

    // Access & modify
    s1[0] = 'h';
    cout << "Modified string: " << s1 << endl;

    // Append / concatenate
    s1.append(" !!!");
    cout << "Appended string: " << s1 << endl;

    // Substring (start_index, length)
    cout << "Substring: " << s1.substr(0, 5) << endl;

    // Find (returns index or string::npos)
    cout << "Index of 'World': " << s1.find("World") << endl;


    /* ==========================
       3. INPUT WITH STRING
       ========================== */

    string name;
    cout << "\nEnter full name: ";
    getline(cin, name);   // reads spaces also
    cout << "You entered: " << name << endl;


    /* ==========================
       4. PALINDROME CHECK (BASIC)
       ========================== */

    string p = "noon";
    int i = 0, j = p.size() - 1;
    bool isPal = true;

    while (i < j) {
        if (p[i] != p[j]) {
            isPal = false;
            break;
        }
        i++;
        j--;
    }

    cout << "Is palindrome (basic): " << isPal << endl;


    /* ==================================
       5. VALID PALINDROME (LeetCode 125)
       ================================== */

    string v = "A man, a plan, a canal: Panama";
    i = 0;
    j = v.size() - 1;
    bool valid = true;

    while (i < j) {
        if (!isalnum(v[i])) {
            i++;
        }
        else if (!isalnum(v[j])) {
            j--;
        }
        else {
            if (tolower(v[i]) != tolower(v[j])) {
                valid = false;
                break;
            }
            i++;
            j--;
        }
    }

    cout << "Is valid palindrome: " << valid << endl;


    /* ==========================
       6. IMPORTANT NOTES
       ========================== */

    /*
    - char[] needs '\0'
    - string manages memory automatically
    - strlen() is O(n), s.length() is O(1)
    - space ' ' is a character but non-alphanumeric
    - isalnum() checks (a-z, A-Z, 0-9)
    */

    return 0;
}
