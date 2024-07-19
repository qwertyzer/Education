GCC = g++ -std=c++17 -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Sum_of_Digits_in_Base_K.cpp

clean:
	rm -rf *.out .clang-format *.dSYM