#include <iostream>

int main() {
	int num;

	std::cout << "Enter an integer: ";
	std::cin >> num;

	// Checks both conditions simultaneously
	if ((num % 2 != 0) && (num % 3 == 0)) {
		std::cout << num << " is both odd and divisible by 3." << std::endl;
	} else {
		std::cout << num << " does not meet both conditions." << std::endl;
	}

	return 0;
}