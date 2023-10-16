#include <iostream>
#include <iomanip>
#include <cmath>

#pragma once

class Complex
{
	// friend ReturnType operatorOp(const Type &lhs, const Type &rhs)
	friend Complex operator+(const Complex &lhs, const Complex &rhs);
	friend Complex operator-(const Complex &lhs, const Complex &rhs);
	// friend Complex operator*(const Complex &lhs, const Complex &rhs);
	// friend Complex operator/(const Complex &lhs, const Complex &rhs);
	friend std::ostream &operator<<(std::ostream &out, const Complex &toWrite);
	friend std::istream &operator>>(std::istream &in, Complex &toRead);
	friend bool operator==(const Complex &lhs, const Complex &rhs);
	friend bool operator!=(const Complex &lhs, const Complex &rhs);

private:
	float realNumber;
	float imaginaryNumber;

public:
	// Constructor
	Complex();
	Complex(int real);
	Complex(float real);
	Complex(double real);
	Complex(int real, int imaginary);
	Complex(float real, float imaginary);
	Complex(double real, double imaginary);

	// Copy Constructor
	// Complex(const Complex &source);

	// Destructor
	// ~Complex();

	// Complex operator=();
	Complex operator-() const;
	Complex operator+=(const Complex &rhs);
	Complex operator-=(const Complex &rhs);
	// Complex operator*=(const Complex &rhs);
	// Complex operator/=(const Complex &rhs);

	// Complex returnPhase() const;
	// Complex returnAmplitude() const;
};
