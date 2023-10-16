#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "ComplexNumbers.h"

Complex::Complex()
	: realNumber{0}, imaginaryNumber{0} {}

Complex::Complex(int real)
    : realNumber(static_cast<float>(real)), imaginaryNumber(0) {}

Complex::Complex(float real)
	: realNumber{real}, imaginaryNumber{0} {}

Complex::Complex(double real)
    : realNumber(static_cast<float>(real)), imaginaryNumber(0) {}

Complex::Complex(int real, int imaginary)
    : realNumber(static_cast<float>(real)), imaginaryNumber(static_cast<float>(imaginary)) {}

Complex::Complex(float real, float imaginary)
	: realNumber{real}, imaginaryNumber{imaginary} {}

Complex::Complex(double real, double imaginary)
    : realNumber(static_cast<float>(real)), imaginaryNumber(static_cast<float>(imaginary)) {}


Complex Complex::operator-() const
{
	if(realNumber != 0)
	{
		return (Complex(-realNumber, -imaginaryNumber));
	}
	return (Complex(realNumber, -imaginaryNumber));
}

Complex Complex::operator-=(const Complex &rhs)
{
	realNumber -= rhs.realNumber;
	imaginaryNumber -= rhs.imaginaryNumber;
	return *this;
}

Complex Complex::operator+=(const Complex &rhs)
{
	realNumber += rhs.realNumber;
	imaginaryNumber += rhs.imaginaryNumber;
	return *this;
}

Complex operator-(const Complex &lhs, const Complex &rhs)
{
	return (Complex(lhs.realNumber - rhs.realNumber, lhs.imaginaryNumber - rhs.imaginaryNumber));
}

Complex operator+(const Complex &lhs, const Complex &rhs)
{
	return (Complex(lhs.realNumber + rhs.realNumber, lhs.imaginaryNumber + rhs.imaginaryNumber));
}

bool operator==(const Complex &lhs, const Complex &rhs)
{
	return (lhs.realNumber == rhs.realNumber && lhs.imaginaryNumber == rhs.imaginaryNumber);
}

bool operator!=(const Complex &lhs, const Complex &rhs)
{
	return !(lhs.realNumber == rhs.realNumber && lhs.imaginaryNumber == rhs.imaginaryNumber);
}

std::ostream &operator<<(std::ostream &out, const Complex &toWrite)
{
	const int Precision = 2;
	out << std::setprecision(Precision);
	out << toWrite.realNumber;
	if (toWrite.imaginaryNumber >= 0)
		out << " + ";
	else
		out << " - ";
	out << fabs(toWrite.imaginaryNumber);
	out << "i";
	out << std::endl;
	return out;
}

std::istream &operator>>(std::istream &in, Complex &toRead)
{
	char signOfImag;
	in >> toRead.realNumber;
	in >> signOfImag;
	in >> toRead.imaginaryNumber;
	if (signOfImag == '-')
		toRead.imaginaryNumber = -toRead.imaginaryNumber;
	in.ignore(1, 'i');
	return in;
}

