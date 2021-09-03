#include <iostream>

int main() {
    int i;
    int n;
    int sum = 0;

    for (i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

// 2nd starts

    std::cout << "----------------------" << std::endl;


    for (n = 0; n <10; n++) {
        sum += n;
    }

    std::cout << "sum (1~9) = " << sum << std::endl;

    return 0;
}
