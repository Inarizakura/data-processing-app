CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -Wconversion -Wpedantic -std=c++17 -O2
SRC = \
	main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = dpa

# Build final executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Build obj files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ) $(TARGET)
