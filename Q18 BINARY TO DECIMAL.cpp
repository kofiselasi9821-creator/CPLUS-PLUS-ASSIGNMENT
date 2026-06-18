#include <iostream>
#include <string>
#include <cmath>

int main() {
	std::string binaryStr;
	int decimalVal = 0;

	std::cout << "Enter a binary number: ";
	std::cin >> binaryStr;

	int length = binaryStr.length();

	for (int i = 0; i < length; i++) {
		// Start processing from the rightmost character
		char bit = binaryStr[length - 1 - i];

		if (bit == '1') {
			decimalVal += pow(2, i);
		}
	}

	std::cout << "Decimal equivalent: " << decimalVal << std::endl;

	return 0;
}