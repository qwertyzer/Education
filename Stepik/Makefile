GCC = gcc -Wall -Werror -Wextra
CLANG = clang-format -i *.c
all:
	cp ../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -o result.out extra_space.c

clean:
	rm -rf *.out .clang-format *.dSYM