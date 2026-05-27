// C++ program to illustrate the macro definition
#include <iostream>
using namespace std;

// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)

int main()
{
    int n = 7;
    int result = SQUARE(n); // Expands to: (n * n)
    cout << "Square of " << n << " is " << result;
    return 0;
}
/*
Types of Macros in C++
Macros can be classified into four types in C++:

Object-Like Macros
Function-Like Macros
Conditional Macros
1. Object-Like Macros
These are used to define constant values — like replacing a word with a fixed number or text.

Example:

In this example, PI is defined as an object-like macro, and whenever PI appears in the code, it is replaced with the value 3.14159.




// C++ program to illustrate the object like macros
#include <iostream>
using namespace std;
​
// Define a constant for the value of PI
#define PI 3.14159
​
int main()
{
    double radius = 4.0;
​
    // Calculate the area of the circle
    double area = PI * radius * radius;
​
    cout << "Area of circle with radius " << radius
         << " is " << area;
​
    return 0;
}

Output
Area of circle with radius 4 is 50.2654
2. Function-Like Macros
These macros look like functions, but they are just text replacements.

Example:

In this example, PRINT(x) is a function-like macro that takes an argument x and expands to a function that prints the value of x.




// C++ program to illustrate the function like macros
#include <iostream>
using namespace std;
​
// Define a macro to print a value
#define PRINT(x) cout << "Value is: " << x
​
int main()
{
    int value = 42;
​
    // Print the value using the PRINT macro
    PRINT(value);
    return 0;
}

Output
Value is: 42
3. Conditional Macros (for Conditional Compilation)
These are used to control which parts of the code should be compiled, based on whether something is defined or not.

Example:




#include <iostream>
​
// Define a macro named DEBUG
#define DEBUG
​
int main() {
    int x = 5, y = 10;
    int sum = x + y;
​
    // This block will only be compiled if DEBUG is defined
    #ifdef DEBUG
        std::cout << "[DEBUG] x = " << x << std::endl;
        std::cout << "[DEBUG] y = " << y << std::endl;
        std::cout << "[DEBUG] sum = " << sum << std::endl;
    #endif
​
    // Always compiled
    std::cout << "Sum: " << sum << std::endl;
​
    return 0;
}

Output
[DEBUG] x = 5
[DEBUG] y = 10
[DEBUG] sum = 15
Sum: 15

Advantages of Macros :
Macros lets us reuse code without rewriting it.
Macros allow easy updates
Macros can control which code is included during compilation

Disadvantages of Macros :
Macros can cause bugs as they don't do type checking.
Macros can lead to unexpected behavior.
Macros increase code complexity.

*/