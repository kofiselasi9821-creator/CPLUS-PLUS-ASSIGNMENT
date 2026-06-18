#include <iostream>
#include <cmath> // Required for the pow() function

int main() {
	double radius, area;
	const double PI = 3.141592653589793;

	std::cout << "Enter the radius of the circle: ";
	std::cin >> radius;

	// Using pow(base, exponent) to square the radius
	area = PI * pow(radius, 2);

	std::cout << "The area of the circle is: " << area << std::endl;

	return 0;
}
