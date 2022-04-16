#include "Header.h"
#include <string>
#include <iostream>

using namespace std;

void Circle::SetRadius(double rad) {
	radius = rad;
}

double Circle::GetRadius() {
	return radius;
}

void Circle::SetArea(double radius) {
	area = pi * pow(radius, 2);
}

double Circle::GetArea() {
	return area;
}

void Circle::SetLength(double radius) {
	 length = 2 * pi * radius;
}

double Circle::GetLength() {
	return length;
}


void Vector::SetVector(double x1, double y1, double x2, double y2) {
	x = (x1 + x2) / 2;
	y = (y1 + y2) / 2;
}

double Vector::GetVector() {
	return x;
	return y;
}

void Vector::SetLength(double x1, double y1, double x2, double y2) {
	length = sqrt((pow(x1, 2) - pow(x2, 2)) + (pow(y1, 2) - pow(y2, 2)));
}

double Vector::GetLength() {
	return length;
}

void Vector::printVector() {
	cout << "x = " << x << ' ' << "y = " << y;
}


Complex Complex::sum(Complex cmp1)
{
	Complex sum{ cmp1.im + this->im, cmp1.re + this->re };
	return sum;
}

Complex Complex::sub(Complex cmp1)
{
	Complex sub{ this->im - cmp1.im, this->re - cmp1.re };
	return sub;
}

Complex Complex::mult(Complex cmp1)
{
	Complex mult{ (cmp1.im * this->im) - (cmp1.re * this->re), (cmp1.im * this->re) + (cmp1.re * this->im) };
	return mult;
}

Complex Complex::div(Complex cmp1)
{
	Complex div{ ((cmp1.im * this->im) + (cmp1.re * this->re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re)), (((this->re * cmp1.im) - (this->im * cmp1.re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re))) };
	return div;
}

void Complex::print(Complex n1) {
	string sign = (n1.re >= 0) ? "+" : "";
	cout << n1.im << sign << n1.re << 'i';
}