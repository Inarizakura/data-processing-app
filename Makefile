CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -Wconversion -Wpedantic -std=c++20 -O2
SRC = \
	main.cpp validation.cpp \
	fileio.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = data_proc_app

# Build final executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Build obj files
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)
