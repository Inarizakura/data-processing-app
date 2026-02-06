#include "utils.hpp"


void launchTask(std::fstream *file, int choice) {
	switch(choice) {
		case 1:
			fileio::task::displayFile(file);
			break;
		case 2:
			fileio::task::wordCount(file);
			break;
		case 3:
			fileio::task::charCount(file);
			break;
		case 4:
			fileio::task::appdText(file);
			break;
		case 5:
			fileio::task::openNewFile(file);
			break;
	}
}

// Display options for the tasks available to the text file.
void promptUser(std::fstream *file) {
	int	userChoice = 0;

	std::cout
			<< "Tasks available:\n"
			<< "1. Print text file to console\n"
			<< "2. Word count\n"
			<< "3. Character count\n"
			<< "4. Append text to end of the file\n"
			<< "5. Open another file\n"
			<< "0. Exit application\n"
			<< "Select task to perform [1 - 5 or 0]: ";
	do {
		std::cin >> userChoice;
		validateInput(userChoice, 0, 5);
	} while(!(userChoice >= 0 && userChoice <= 5));
	if (userChoice != 0) {
		launchTask(file, userChoice);
	}
}

// Display the application menu.
void appMenu() {
	std::cout 
		<< "| Data Processing Application |\n"
		<< "Please provide the name of the file to open before selecting a task.\n"
		<< "The file name can be an absolute path.\n"
		<< "Key in the file name to open: \n";

	std::fstream file(fileio::getFile(), std::ios::in | std::ios::out | std::ios::app);

	checkFile(&file);
	promptUser(&file);
	std::cout << "Exiting application.\n";
	(file).close();
}

int main() {
	appMenu();
	return 0;
}
