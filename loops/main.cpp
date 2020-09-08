#include <iostream>

void printTree(int height);

int main() {

    int height;
    std::cout << "Enter height of tree: ";
    std::cin >> height;
    printTree(height);
    return 0;
}

void printTree(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) std::cout << " ";
        for (int j = 0; j < (i + 1) * 2 - 1; j++) std::cout << "#";
        std::cout << std::endl;
    }
    for (int i = 0; i < height; i++) std::cout << " ";
    std::cout << "#\n";
}