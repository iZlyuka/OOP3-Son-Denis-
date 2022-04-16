#ifndef HEADER_H
#define HEADER_H
#include <cmath>
#include <iostream>
#include <string>

class Circle {
private:
	const double pi = 3.14;

public:
	double radius;
	double area;
	double length;
	void SetRadius(double);
	double GetRadius();
	void SetArea(double);
	double GetArea();
	void SetLength(double);
	double GetLength();
};

class Vector {
private:
	double length;
	double x1;
	double y1;
	double x2;
	double y2;
	double x;
	double y;
public:
	void SetVector(double, double, double, double);
	double GetVector();
	void SetLength(double, double, double, double);
	double GetLength();
	void printVector();
};

struct Complex{

	double im = 0;
	double re = 0;

	Complex sum(Complex cmp1);

	Complex sub(Complex cmp1);

	Complex mult(Complex cmp1);

	Complex div(Complex cmp1);

	static void print(Complex n1);
};



#endif