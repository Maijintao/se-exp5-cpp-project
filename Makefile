CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
TARGET = build/grade_app
SRCS = $(wildcard src/*.cpp)

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rf build
