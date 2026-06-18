#include <iostream>
#include <string> // Required for using string variables

int main() {
	std::string userInput;

	std::cout << "Enter a word: ";
	std::cin >> userInput;

	if (userInput == "hello") {
		std::cout << "Hello!" << std::endl;
	} else {
		std::cout << "Goodbye!" << std::endl;
	}

	return 0;
}