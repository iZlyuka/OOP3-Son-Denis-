#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Circle circle;

	double rad = 5.0;
	circle.SetRadius(rad);
	circle.SetArea(rad);
	circle.SetLength(rad);
	cout << "Радиус = " << circle.GetRadius() << '\n' << "Площадь = " << circle.GetArea() << '\n' << "Длина = " << circle.GetLength() << '\n';

	Vector vector;

	double x1 = 5.0;
	double y1 = 6.0;
	double x2 = 3.0;
	double y2 = 4.0;

	vector.SetVector(x1, y1, x2, y2);
	vector.GetVector();
	vector.printVector();
	vector.SetLength(x1, y1, x2, y2);
	cout << vector.GetLength() << '\n';

	Complex a{ 4, 62 };
	Complex b{ 2, 7 };
	//Complex c{ 9, 4 };
	Complex::print(a.div(b));
}