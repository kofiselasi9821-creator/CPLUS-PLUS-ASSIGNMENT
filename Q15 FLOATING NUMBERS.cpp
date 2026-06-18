#include <iostream>

int main() {
	float num1, num2;

	std::cout << "Enter two floating-point numbers: ";
	std::cin >> num1 >> num2;

	float larger = (num1 > num2) ? num1 : num2;

	std::cout << "The larger floating-point number is: " << larger << std::endl;

	return 0;
}
