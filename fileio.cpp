#include "utils.hpp"
#include <fstream>
#include <filesystem>

namespace fileio {
	// Prompts the user for the text file path and validates it before returning the path.
	std::string	getFile() {
		std::filesystem::path	file_name;
		
		do {
			std::cin >> file_name;
			validateInput();
			if (!std::filesystem::exists(file_name)) {
				std::cout << "Invalid path or file does not exist. Please try again: ";
				return getFile();
			}
		} while (!(file_name.extension() == ".txt"));
		std::cout << file_name.string();
		return file_name.string();
	}
	// Returns the "cursor" back to the top of the text file.
	void		resetFile(std::fstream *file) {
		(*file).clear();
		(*file).seekg(0);
	}

	namespace task {
		// Display text file contents on the console.
		void	displayFile(std::fstream *file) {
			std::string	line;

			while(std::getline(*file, line)) {
				std::cout << line << std::endl;
			}
			resetFile(file);
		}
		// Counts the number of words in the text file and outputs it to the console.
		void	wordCount(std::fstream *file) {
			std::string line;
			int			count = 0;

			while(std::getline(*file, line)) {
				std::stringstream	ss(line);
				std::string			word = "";

				while (ss >> word) {
					count++;
				}
			}
			std::cout << "Total word count of the file is: " << count << std::endl;
			resetFile(file);
		}
		// Counts the number of characters in the text file and outputs it to the console.
		void	charCount(std::fstream  *file) {
			std::string	line;
			int			count = 0;

			while(std::getline(*file, line)) {
				for(size_t i = 0; i < line.length(); i++) {
					count++;
				}
			}
			std::cout << "Total character count of the file is: " << count << std::endl;
			resetFile(file);
		}
		// Appends text onto the end of the file.
		void	appdText(std::fstream *file) {
			std::string text;

			std::cout << "Text to append to the end of the file: ";
			std::getline(std::cin, text);
			validateInput();
			*file << text << std::endl;
			resetFile(file);
		}
	}
}
