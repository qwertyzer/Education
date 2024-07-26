GCC = g++ -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Score_of_a_String.cpp

clean:
	rm -rf *.out .clang-format *.dSYM