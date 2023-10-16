#include <iostream>
#include "ComplexNumbers.h"

// int main() {
//     // Test constructor overloads
//     Complex a; // Default constructor
//     Complex b(3.0); // Real number constructor
//     Complex c(0.0, 4.0); // Real and imaginary number constructor

//     // Test copy constructor
//     Complex d(b);

//     // Test unary minus operator
//     Complex e = -c;

//     // Test addition and subtraction operators
//     Complex f = a + c;
//     Complex g = b - d;

//     // Test input and output operators
//     std::cout << "Enter a complex number (e.g., 2 + 3i): ";
//     Complex h;
//     std::cin >> h;
//     std::cout << "You entered: " << h;

//     // Display results
//     std::cout << "a = " << a;
//     std::cout << "b = " << b;
//     std::cout << "c = " << c;
//     std::cout << "d = " << d;
//     std::cout << "e = " << e;
//     std::cout << "f = " << f;
//     std::cout << "g = " << g;
//     std::cout << "a == b: " << ((a == b) ? "true" : "false") << std::endl;
//     std::cout << "c != d: " << ((c != d) ? "true" : "false") << std::endl;

//     return 0;
// }

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.0, -1.0);
    Complex c(3.0, 1.0);

	std::cout<<"a = "<<a;
	std::cout<<"b = "<<b;
	std::cout<<"c = "<<c;

    // Test cases
    Complex result;

    // Unary minus
    result = -a;
    std::cout << "-a: " << result;

    // Addition and assignment
    result = a + b;
    std::cout << "a + b: " << result;

    // Compound addition
    a += b += c;
    std::cout << "a += b += c: " << a << b << c;

    // Addition and compound assignment
    (a += b) += c;
    std::cout << "(a += b) += c: " << a << b << c;

    // Multiplication with real numbers
    result = a + 7;
    std::cout << "a + 7: " << result;

    result = 7 + a;
    std::cout << "7 + a: " << result;

    // Equality checks
    bool equal = c == 3.5;
    std::cout << "c == 3.5: " << equal << std::endl;

    equal = 3.5 == c;
    std::cout << "3.5 == c: " << equal << std::endl;

    return 0;
}

