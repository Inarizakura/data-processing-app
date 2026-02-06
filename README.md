# Data Processing Application
This is the capstone project for Microsoft's Intermediate C++ Programming Techniques course. The goal is to create a data processing application that can read data from at least one file format, process the data through various functions, and output the results.

---

## Project Requirements
1. File input / output operations
	- Read data from at least one file format (CSV, JSON, or plain text)
	- Write processed results to output files

2. Data parsing and processing
	- Parse structured data from input files
	- Validate data for completeness and correctness
	- Apply transformations or analysis to the data

3. Modular program structure
	- Organize code into appropriate functions
	- Use namespaces to manage code organization
	- Apply best practices for code readability and maintenance

4. External library integration
* Skipped as this application doesn't require an external library to function.
	- Incorporate at least one external library
	- Document the library's purpose and integration

5. Error handling
	- Implement robust error handling for file operations
	- Validate user inputs and provide helpful error messages
	- Ensure the program doesn't crash on invalid data

---

## Data Processing Tasks Implemented
This application takes a text file and is able to perform the following tasks:

1. Display text file
Prints the contents of the text file onto the console.

2. Word count
Counts the number of words in the text file and outputs the total into the console.

2. Character count
Counts the number of characters in the text file and outputs the total into the console.

4. Append text
Appends text onto the end of the text file.

5. Open another file
Closes the current opened text file and prompts the user for the path of the new file to open.

---

## Application Restrictions
The text file has to exist, the application will not prompt the user to create a new file if it doesn't exist in the path provided.
Only one file can be opened at a time.

---
