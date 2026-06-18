#include <iostream>
#include <string>
#include <cmath>

int main() {
	std::string binary;
	int decimal = 0;

	std::cout << "Enter a binary number: ";
	std::cin >> binary;

	// Step 1: Base Conversion to Decimal
	int len = binary.length();
	for (int i = 0; i < len; i++) {
		if (binary[len - 1 - i] == '1') {
			decimal += pow(2, i);
		}
	}

	// Step 2: Output Menu Selections translated via output stream format options
	std::cout << "\n--- Conversion Results ---" << std::endl;
	std::cout << "Decimal:     " << decimal << std::endl;
	std::cout << "Octal:       " << std::oct << decimal << std::endl;
	std::cout << "Hexadecimal: " << std::hex << std::uppercase << decimal << std::endl;

	return 0;
}