#include <iostream>

int main() {
	int num;

	std::cout << "Enter an integer: ";
	std::cin >> num;

	// Modulus (%) gives the remainder. If remainder divided by 2 isn't 0, it's odd.
	if (num % 2 != 0) {
		std::cout << "Odd number" << std::endl;
	} else {
		std::cout << "Even number" << std::endl;
	}

	return 0;
}