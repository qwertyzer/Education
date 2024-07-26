GCC = g++ -std=c++17 -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Number_of_Good_Pairs.cpp

clean:
	rm -rf *.out .clang-format *.dSYM