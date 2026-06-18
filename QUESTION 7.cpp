#include <iostream>
#include <string>

int main() {
	std::string text;

	std::cout << "Enter a string: ";
	std::cin >> text;

	// string::npos means "not found"
	if (text.find('a') != std::string::npos) {
		std::cout << "Contains 'a'" << std::endl;
	} else {
		std::cout << "Does not contain 'a'" << std::endl;
	}

	return 0;
}