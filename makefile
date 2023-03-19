CXX = emcc
CXXFLAGS = -s ASYNCIFY
LDLIBS = -lembind

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = main.js

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ $(LDLIBS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
