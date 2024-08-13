GCC = g++ -std=c++20 -O3 -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Ambitious_snail.cpp

clean:
	rm -rf *.out .clang-format *.dSYM