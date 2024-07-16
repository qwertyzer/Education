#include <iostream>

int test(int a);

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << test(a) << std::endl;
    return 0;
}

int test(int a) {
    return a * 1.1;
}