GCC = g++ -Wall -Werror -Wextra
CLANG = clang-format -i *.cpp

all:
	cp ../../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out Water_Bottles.cpp

clean:
	rm -rf *.out .clang-format *.dSYM