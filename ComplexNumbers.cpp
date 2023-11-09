#include <iostream>
#include <iomanip>
#include <cmath>
#include "ComplexNumbers.h"

Complex::Complex()
	: realNumber{0}, imaginaryNumber{0} {}

Complex::Complex(double real)
	: realNumber(static_cast<float>(real)), imaginaryNumber(0) {}

Complex::Complex(double real, double imaginary)
	: realNumber(static_cast<float>(real)), imaginaryNumber(static_cast<float>(imaginary)) {}

Complex::Complex(const Complex &source)
	: realNumber{source.realNumber}, imaginaryNumber{source.imaginaryNumber} {}

Complex &Complex::operator=(const Complex &rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	realNumber = rhs.realNumber;
	imaginaryNumber = rhs.imaginaryNumber;
	return *this;
}

Complex Complex::operator-() const
{
	if (realNumber != 0)
	{
		return (Complex(-realNumber, -imaginaryNumber));
	}
	return (Complex(realNumber, -imaginaryNumber));
}

Complex &Complex::operator-=(const Complex &rhs)
{
	realNumber -= rhs.realNumber;
	imaginaryNumber -= rhs.imaginaryNumber;
	return *this;
}

Complex &Complex::operator+=(const Complex &rhs)
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
	const int Precision = 3;
	out << std::setprecision(Precision);
	out << toWrite.realNumber;
	if (toWrite.imaginaryNumber >= 0)
		out << " + ";
	else
		out << " - ";
	out << fabs(toWrite.imaginaryNumber);
	out << "i";
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

Complex operator*(const Complex &lhs, const Complex &rhs)
{
	return Complex((lhs.realNumber * rhs.realNumber - lhs.imaginaryNumber * rhs.imaginaryNumber), (lhs.realNumber * rhs.imaginaryNumber + lhs.imaginaryNumber * rhs.realNumber));
}

Complex operator/(const Complex &lhs, const Complex &rhs)
{
	if (rhs.realNumber == 0 && rhs.imaginaryNumber == 0)
	{
		return Complex(0, 0);
	}
	float temp = pow(rhs.realNumber, 2) + pow(rhs.imaginaryNumber, 2);
	return Complex((lhs.realNumber * rhs.realNumber + lhs.imaginaryNumber * rhs.imaginaryNumber) / temp, (lhs.imaginaryNumber * rhs.realNumber - lhs.realNumber * rhs.imaginaryNumber) / temp);
}

Complex &Complex::operator*=(const Complex &rhs)
{
	float temp = realNumber * rhs.realNumber - imaginaryNumber * rhs.imaginaryNumber;
	imaginaryNumber = realNumber * rhs.imaginaryNumber + imaginaryNumber * rhs.realNumber;
	realNumber = temp;
	return *this;
}

Complex &Complex::operator/=(const Complex &rhs)
{
	if (rhs.realNumber == 0 && rhs.imaginaryNumber == 0)
	{
		realNumber = 0;
		imaginaryNumber = 0;
		return *this;
	}
	float temp = pow(rhs.realNumber, 2) + pow(rhs.imaginaryNumber, 2);
	float temp2 = (realNumber * rhs.realNumber + imaginaryNumber * rhs.imaginaryNumber) / temp;
	imaginaryNumber = (imaginaryNumber * rhs.realNumber - realNumber * rhs.imaginaryNumber) / temp;
	realNumber = temp2;
	return *this;
}

float Complex::returnPhase() const
{
	if (realNumber == 0)
	{
		if (imaginaryNumber > 0)
		{
			return M_PI / 2; // 90 degrees
		}
		else if (imaginaryNumber < 0)
		{
			return -M_PI / 2; // -90 degrees
		}
		else
		{
			return 0; // Undefined, but we can return 0 in this case.
		}
	}
	return atan2(imaginaryNumber, realNumber);
}

float Complex::returnAmplitude() const
{
	return sqrt(pow(realNumber, 2) + pow(imaginaryNumber, 2));
}
