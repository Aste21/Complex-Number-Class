#include <iostream>
#include "ComplexNumbers.h"

int main() {
    // Create some complex numbers
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);

    std::cout << "a: " << a << " Correct: 2 + 3i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;

    // Test addition and subtraction

    std::cout << "a + b - c: " << a + b - c << " Correct: 0 + 2i" << std::endl;
    std::cout << "((a += b) += c): " << ((a += b) += c) << " Correct: 6 + 6i" << std::endl;
    std::cout << "a: " << a << " Correct: 6 + 6i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;

    a = Complex(2.0, 3.0);
    b = Complex(1.0, 1.0);
    c = Complex(3.0, 2.0);

    // Test multiplication

    std::cout << "a * b * c: " << a * b * c << " Correct: -13 + 13i" << std::endl;
    std::cout << "((a *= b) *= c): " << ((a *= b) *= c) << " Correct: -13 + 13i" << std::endl;
    std::cout << "a: " << a << " Correct: -13 + 13i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
    a = Complex(2.0, 3.0);
    b = Complex(1.0, 1.0);
    c = Complex(3.0, 2.0);

    // Test a += b += c

    std::cout << "(a += b += c): " << (a += b += c) << " Correct: 6 + 6i" << std::endl;
    std::cout << "a: " << a << " Correct: 6 + 6i" << std::endl;
    std::cout << "b: " << b << " Correct: 4 + 3i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;

    a = Complex(2.0, 3.0);
    b = Complex(1.0, 1.0);
    c = Complex(3.0, 2.0);

    // Test a *= b *= c

    std::cout << "(a *= b *= c): " << (a *= b *= c) << " Correct: -13 + 13i" << std::endl;
    std::cout << "a: " << a << " Correct: -13 + 13i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 5i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;

    a = Complex(2.0, 3.0);
    b = Complex(1.0, 1.0);
    c = Complex(3.0, 2.0);

    // Test addition and multiplication with real numbers

    std::cout << "a + 7: " << a + 7.0 << " Correct: 9 + 3i" << std::endl;
    std::cout << "7 + a: " << 7.0 + a << " Correct: 9 + 3i" << std::endl;
    std::cout << "b * 5: " << b * 5.0 << " Correct: 5 + 5i" << std::endl;
    std::cout << "5 * b: " << 5.0 * b << " Correct: 5 + 5i" << std::endl;

    // Test equality comparisons

    std::cout << "c == 3.5: " << (c == 3.5 ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "3.5 == c: " << (3.5 == c ? "true" : "false") << " Correct: false" << std::endl;

    // Create some more complex numbers
    Complex d(4.0, 5.0);
    Complex e(2.0, 2.0);
    Complex f(1.0, 3.0);
    Complex g(7.0); // Construct with a real part, imaginary part defaults to 0
    Complex h;      // Default constructor, both real and imaginary parts are 0

    std::cout << "d: " << d << " Correct: 4 + 5i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    std::cout << "f: " << f << " Correct: 1 + 3i" << std::endl;
    std::cout << "g: " << g << " Correct: 7" << std::endl;
    std::cout << "h: " << h << " Correct: 0" << std::endl;

    // Test addition, subtraction

    std::cout << "d + e: " << d + e << " Correct: 6 + 7i" << std::endl;
    std::cout << "d - e: " << d - e << " Correct: 2 + 3i" << std::endl;
    std::cout << "(d += e): " << (d += e) << " Correct: 6 + 7i" << std::endl;
    std::cout << "d: " << d << " Correct: 6 + 7i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);
    std::cout << "(d -= e): " << (d -= e) << " Correct: 4 + 5i" << std::endl;
    std::cout << "d: " << d << " Correct: 4 + 5i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);

    // Test multiplication, division

    std::cout << "d * e: " << d * e << " Correct: -2 + 18i" << std::endl;
    std::cout << "d / e: " << d / e << " Correct: 2.25 + 0.25i" << std::endl;
    std::cout << "(d *= e): " << (d *= e) << " Correct: 6 + 18i" << std::endl;
    std::cout << "d: " << d << " Correct: 6 + 18i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);
    std::cout << "(d /= e): " << (d /= e) << " Correct: 2.5 + 0.5i" << std::endl;
    std::cout << "d: " << d << " Correct: 2.5 + 0.5i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);

    // Test equality comparisons

    std::cout << "d == d: " << (d == d ? "true" : "false") << " Correct: true" << std::endl;
    std::cout << "d == e: " << (d == e ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "d != d: " << (d != d ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "d != e: " << (d != e ? "true" : "false") << " Correct: true" << std::endl;

    // Test returnPhase and returnAmplitude for d
    float phaseD = d.returnPhase();
    float amplitudeD = d.returnAmplitude();

    std::cout << "Phase of d: " << phaseD << " radians" << " Correct: 0.896055" << std::endl;
    std::cout << "Amplitude of d: " << amplitudeD << " Correct: 6.40312" << std::endl;

    return 0;
}
