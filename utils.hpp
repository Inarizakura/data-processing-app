#include <iostream>
#include <string>

// validation.cpp
void	clearInputBuffer();
void	validateInput(int input, int rng_start, int rng_end);
void	validateInput();

// fileio.cpp
namespace fileio {
	std::string getFile();
	void		resetFile(std::fstream *file);
	namespace task {
		void	displayFile(std::fstream *file);
		void 	wordCount(std::fstream *file);
		void 	charCount(std::fstream *file);
		void	appdText(std::fstream *file);
	}
}
