#include <iostream>
#include "ComplexNumbers.h"

void testClassicConstructor();

void testAdditionAndSubstraction();

void testOfAdditionAssignment();

void testOfMultiplication();

void testOfMultiplicationAssignment();

void testOfAdditionAndSubstractionWithRealNumbers();

void testOfEqualityComparionBetweenComplexAndReal();

void testConstructorOverload();

void anotherTestOfAdditionAndSubstraction();

void testMultiplicationAndDivision();

void testEqualityComparisons();

void testOfPhaseAndAmplitudeFunctions();

int main()
{
    testClassicConstructor();

    testAdditionAndSubstraction();

    testOfAdditionAssignment();

    testOfMultiplication();

    testOfMultiplicationAssignment();

    testOfAdditionAndSubstractionWithRealNumbers();

    testOfEqualityComparionBetweenComplexAndReal();

    testConstructorOverload();

    anotherTestOfAdditionAndSubstraction();

    testMultiplicationAndDivision();

    testEqualityComparisons();

    testOfPhaseAndAmplitudeFunctions();

    return 0;
}

void testClassicConstructor()
{
    std::cout << "Test of classic constructor: \n\n";
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);

    std::cout << "a: " << a << " Correct: 2 + 3i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
}

void testAdditionAndSubstraction()
{
    std::cout << "\n\n\n";
    std::cout << "Test of addition and substraction: \n\n" ;
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);
    std::cout << "a + b - c: " << a + b - c << " Correct: 0 + 2i" << std::endl;
    std::cout << "((a += b) += c): " << ((a += b) += c) << " Correct: 6 + 6i" << std::endl;
    std::cout << "a: " << a << " Correct: 6 + 6i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
}

void testOfAdditionAssignment()
{
    std::cout << "\n\n\n";
    std::cout << "Test of addition assignment: \n\n";
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);
    std::cout << "(a += b += c): " << (a += b += c) << " Correct: 6 + 6i" << std::endl;
    std::cout << "a: " << a << " Correct: 6 + 6i" << std::endl;
    std::cout << "b: " << b << " Correct: 4 + 3i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
}

void testOfMultiplication()
{
    std::cout << "\n\n\n";
    std::cout << "Test of multiplication: \n\n";
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);
    std::cout << "a * b * c: " << a * b * c << " Correct: -13 + 13i" << std::endl;
    std::cout << "((a *= b) *= c): " << ((a *= b) *= c) << " Correct: -13 + 13i" << std::endl;
    std::cout << "a: " << a << " Correct: -13 + 13i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 1i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
}

void testOfMultiplicationAssignment()
{
    std::cout << "\n\n\n";
    std::cout << "Test of multiplication assignment: \n\n";
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    Complex c(3.0, 2.0);
    std::cout << "(a *= b *= c): " << (a *= b *= c) << " Correct: -13 + 13i" << std::endl;
    std::cout << "a: " << a << " Correct: -13 + 13i" << std::endl;
    std::cout << "b: " << b << " Correct: 1 + 5i" << std::endl;
    std::cout << "c: " << c << " Correct: 3 + 2i" << std::endl;
}

void testOfAdditionAndSubstractionWithRealNumbers()
{
    std::cout << "\n\n\n";
    std::cout << "Test of addition and substraction with real numbers: \n\n";
    Complex a(2.0, 3.0);
    Complex b(1.0, 1.0);
    std::cout << "a + 7: " << a + 7.0 << " Correct: 9 + 3i" << std::endl;
    std::cout << "7 + a: " << 7.0 + a << " Correct: 9 + 3i" << std::endl;
    std::cout << "b * 5: " << b * 5.0 << " Correct: 5 + 5i" << std::endl;
    std::cout << "5 * b: " << 5.0 * b << " Correct: 5 + 5i" << std::endl;
}

void testOfEqualityComparionBetweenComplexAndReal()
{
    std::cout << "\n\n\n";
    std::cout << "Test of equality comparison between a complex and a real number: \n\n";
    Complex c(3.0, 2.0);
    std::cout << "c == 3.5: " << (c == 3.5 ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "3.5 == c: " << (3.5 == c ? "true" : "false") << " Correct: false" << std::endl;
}

void testConstructorOverload()
{
    std::cout << "\n\n\n";
    std::cout << "Test of constructor overloading: \n\n";
    Complex d(4.0, 5.0);
    Complex e(2.0, 2.0);
    Complex f(1.0, 3.0);
    Complex g(7.0); // Construct with a real part, imaginary part defaults to 0
    Complex h;      // Default constructor, both real and imaginary parts are 0
    std::cout << "d: " << d << " Correct: 4 + 5i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    std::cout << "f: " << f << " Correct: 1 + 3i" << std::endl;
    std::cout << "g: " << g << " Correct: 7 + 0i" << std::endl;
    std::cout << "h: " << h << " Correct: 0 + 0i" << std::endl;
}

void anotherTestOfAdditionAndSubstraction()
{
    std::cout << "\n\n\n";
    std::cout << "Another test of addition and substraction: \n\n";
    Complex d(4.0, 5.0);
    Complex e(2.0, 2.0);
    std::cout << "d + e: " << d + e << " Correct: 6 + 7i" << std::endl;
    std::cout << "d - e: " << d - e << " Correct: 2 + 3i" << std::endl;
    std::cout << "(d += e): " << (d += e) << " Correct: 6 + 7i" << std::endl;
    std::cout << "d: " << d << " Correct: 6 + 7i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);
    std::cout << "(d -= e): " << (d -= e) << " Correct: 2 + 3i" << std::endl;
    std::cout << "d: " << d << " Correct: 2 + 3i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
}

void testMultiplicationAndDivision()
{
    std::cout << "\n\n\n";
    std::cout << "Test of multiplication and division: \n\n";
    Complex d(4.0, 5.0);
    Complex e(2.0, 2.0);
    std::cout << "d * e: " << d * e << " Correct: -2 + 18i" << std::endl;
    std::cout << "d / e: " << d / e << " Correct: 2.25 + 0.25i" << std::endl;
    std::cout << "(d *= e): " << (d *= e) << " Correct: -2 + 18i" << std::endl;
    std::cout << "d: " << d << " Correct: -2 + 18i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
    d = Complex(4.0, 5.0);
    e = Complex(2.0, 2.0);
    std::cout << "(d /= e): " << (d /= e) << " Correct: 2.25 + 0.25i" << std::endl;
    std::cout << "d: " << d << " Correct: 2.25 + 0.25i" << std::endl;
    std::cout << "e: " << e << " Correct: 2 + 2i" << std::endl;
}

void testEqualityComparisons()
{
    std::cout << "\n\n\n";
    std::cout << "Test of equality comparisons: \n\n";
    Complex d(4.0, 5.0);
    Complex e(2.0, 2.0);
    std::cout << "d == d: " << (d == d ? "true" : "false") << " Correct: true" << std::endl;
    std::cout << "d == e: " << (d == e ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "d != d: " << (d != d ? "true" : "false") << " Correct: false" << std::endl;
    std::cout << "d != e: " << (d != e ? "true" : "false") << " Correct: true" << std::endl;
}

void testOfPhaseAndAmplitudeFunctions()
{
    std::cout << "\n\n\n";
    std::cout << "Test of returnPhase and returnAmplitude functions: \n\n";
    Complex d(4.0, 5.0);
    std::cout << "Phase of d: " << d.returnPhase() << " radians"<< " Correct: 0.896055" << std::endl;
    std::cout << "Amplitude of d: " << d.returnAmplitude() << " Correct: 6.40312" << std::endl;
}
