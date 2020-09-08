#include <iostream>
#include <ctime>
#include <math.h>

int main() {
    srand(time(NULL));
    int length, start, end;
    std::cout << "Enter length of array: ";
    std::cin >> length;
    std::cout << "Enter start of range: ";
    std::cin >> start;
    std::cout << "Enter end of range: ";
    std::cin >> end;
    int result[length];
    for (int i = 0; i < length; i++) {
        int secret = (std::rand() % (end - start)) + start;
        result[i] = secret;
    }
    for (int i = 0; i < sizeof(result) / sizeof(*result); i++) {
        std::cout << i << ": " << result[i] << std::endl;
    }

    return 0;
}