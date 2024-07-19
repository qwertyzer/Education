GCC = g++ -std=c++17 -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Lucky_Numbers_in_a_Matrix.cpp

clean:
	rm -rf *.out .clang-format *.dSYM