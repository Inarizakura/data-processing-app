#include "utils.hpp"
#include <fstream>
#include <filesystem>

namespace fileio {
	std::string getFile() {
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
	void	resetFile(std::fstream *file) {
		(*file).clear();
		(*file).seekg(0);
	}

	namespace task {
		void wordCount(std::fstream *file) {
			std::string line;
			int			word_count = 0;

			while(std::getline(*file, line)) {
				std::stringstream	ss(line);
				std::string			word = "";

				while (ss >> word) {
					word_count++;
				}
			}
			std::cout << "Total word count of the file is: " << word_count << std::endl;
			resetFile(file);
		}
	}
}
