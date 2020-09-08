#include <iostream>
#include <string>

std::string encrypt(std::string sInput, int index);
std::string decrypt(std::string sInput, int index);

int main() {

    std::string str, sInd;
    int ind;
    std::cout << "enter string to encrypt: ";
    std::getline(std::cin, str);
    std::cout << "enter encryption index: ";
    std::getline(std::cin, sInd);
    ind = std::stoi(sInd);
    std::string encrypted = encrypt(str, ind);
    std::string decrypted = decrypt(encrypted, ind);
    std::cout << encrypted << std::endl;
    std::cout << decrypted << std::endl;

    return 0;
}

std::string encrypt(std::string sInput, int index) {
    std::string result = "";
    for (char y: sInput) {
        int enc = (int) y;
        if (isupper(y)) {
            enc = (((y - 65) + index) % 26) + 65;
        } else if (islower(y)) {
            enc = (((y - 97) + index) % 26) + 97;
        }
        result += (char) enc;
    }
    return result;
}

std::string decrypt(std::string sInput, int index) {
    return encrypt(sInput, 26 - index);
}