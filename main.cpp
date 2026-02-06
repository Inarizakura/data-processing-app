#include "utils.hpp"
#include <fstream>

void launchTask(std::fstream *file, int choice) {
	switch(choice) {
		case 1:
			fileio::task::wordCount(file);
			break;
		case 2:
			fileio::task::charCount(file);
			break;
	}
}

// Display the application menu.
void appMenu() {
	int	userChoice = 0;

	std::cout 
		<< "| Data Processing Application |\n"
		<< "Please provide the name of the file to open before selecting a task.\n"
		<< "The file name can be an absolute path."
		<< "Key in the file name to open: \n";

	std::fstream file(fileio::getFile(), std::ios::in | std::ios::out | std::ios::app);

	if (!file.is_open()) {
		std::cerr << "Failed to open the file. Exiting program.";
		return;
	} else {
		std::cout << "\n\nSuccessfully opened the file.\n";
		std::cout
			<< "Tasks available:\n"
			<< "1. Word count\n"
			<< "2. Character count\n"
			<< "Select task to perform [1]: ";
	}
	do {
		std::cin >> userChoice;
		validateInput(userChoice, 1, 2);
	} while(!(userChoice >= 1 && userChoice <= 2));
	launchTask(&file, userChoice);
}

int main() {
	appMenu();
	return 0;
}
