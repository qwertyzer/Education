GCC = gcc
CLANG = clang-format -i *.c
all:
	cp ../../materials/.clang-format .clang-format
	$(CLANG)
	$(GCC) -lgd -o result.out some.c
	./result.out

clean:
	rm -rf *.out .clang-format *.dSYM *.gif