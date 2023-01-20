CC=g++ -std=c++11
FLAGS = -Wall -Werror -Wextra
SOURCE = engine.cpp characteristics.cpp process.cpp

all: clean build

build:
	mkdir build
	$(CC) $(FLAGS) $(SOURCE) -o ./build/EngineModel

check:
	clang-format -n *.cpp
	clang-format -n *.h
	
clean:
	rm -rf build

