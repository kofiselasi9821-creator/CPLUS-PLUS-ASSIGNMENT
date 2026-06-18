#include <iostream>

int main() {
	int x, y;

	std::cout << "Enter value for X: ";
	std::cin >> x;
	std::cout << "Enter value for Y: ";
	std::cin >> y;

	std::cout << "\nBefore swap: X = " << x << ", Y = " << y << std::endl;

	// Swapping logic using XOR (^) without a temporary variable
	x = x ^y;
	y = x ^y;
	x = x ^y;

	std::cout << "After swap: X = " << x << ", Y = " << y << std::endl;

	return 0;
}
