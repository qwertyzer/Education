GCC = g++ -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Equation_with_a_root.cpp

clean:
	rm -rf *.out .clang-format *.dSYM