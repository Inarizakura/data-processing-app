#include <iostream>
#include <limits>
#include <fstream>

void clearInputBuffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void validateInput(int input, int rng_start, int rng_end) {
	if (std::cin.fail() || (input < rng_start || input > rng_end)) {
		std::cout << "\nInvalid input, please try again.\n";
	}
	clearInputBuffer();
}

void appMenu() {
	int userChoice = 0;

	std::cout 
	<< "| Data Processing Application |\n"
	<< "Select task:\n"
	<< "1. Word counter\n\n";
	do {
		std::cin >> userChoice;
		validateInput(userChoice, 1, 1);
	} while(!(userChoice >= 1 && userChoice <= 1));

}

int main() {
	appMenu();
	return 0;
}
