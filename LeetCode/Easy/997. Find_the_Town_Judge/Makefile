GCC = g++ -std=c++20 -O3 -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Find_the_Town_Judge.cpp

clean:
	rm -rf *.out .clang-format *.dSYM