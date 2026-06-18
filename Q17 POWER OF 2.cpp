#include <iostream>

int main() {
	int num;

	std::cout << "Enter a positive integer: ";
	std::cin >> num;

	// A power of 2 in binary has exactly one bit set (e.g., 8 is 1000).
	// Subtracting 1 flips all bits (7 is 0111). Doing a bitwise AND yields 0.
	if (num > 0 && (num & (num - 1)) == 0) {
		std::cout << num << " is a power of 2." << std::endl;
	} else {
		std::cout << num << " is NOT a power of 2." << std::endl;
	}

	return 0;
}