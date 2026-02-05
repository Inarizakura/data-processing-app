#include "utils.hpp"
#include <limits>

void clearInputBuffer() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void validateInput(int input, int rng_start, int rng_end) {
	if (std::cin.fail() || (input < rng_start || input > rng_end)) {
		std::cerr << "\nInvalid input, please try again.\n";
	}
	clearInputBuffer();
}

void validateInput() {
	if (std::cin.fail()) {
		std::cerr << "\nInvalid input, please try again.\n";
	}
	clearInputBuffer();
}
