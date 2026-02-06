#include "utils.hpp"
#include <limits>

void clearInputBuffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Validates input for task selection
void validateInput(int input, int rng_start, int rng_end) {
	if (std::cin.fail() || (input < rng_start || input > rng_end)) {
		std::cerr << "\nInvalid input, please try again. [1 - " << rng_end << " or 0]\n";
	}
	clearInputBuffer();
}

// Validates input for promptContinue()
void validateInput(char c) {
	if (std::cin.fail() || (c != 'y' || c != 'Y' || c != 'n' || c != 'N')) {
		std::cerr << "\nInvalid input, please try again. [ y / n ]\n";
	}
	clearInputBuffer();
}

// Validates input for tasks input
void validateInput() {
	if (std::cin.fail()) {
		std::cerr << "\nInvalid input, please try again.\n";
	}
	clearInputBuffer();
}

int	checkFile(std::fstream *file) {
	if (!(*file).is_open()) {
		std::cerr << "Failed to open the file. Exiting program.";
		return 1;
	}
	std::cout << "\n\nSuccessfully opened the file.\n";
	return 0;
}
