#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::cout << "Enter arithmetic expression: ";
    std::string sInput;
    getline(std::cin, sInput);
    std::vector<std::string> vecsWords;
    std::stringstream ss(sInput);
    std::string sIndivWord;
    char cSpace = ' ';
    while (getline(ss, sIndivWord, cSpace)) {
        vecsWords.push_back(sIndivWord);
    }
    float fNum1 = std::stof(vecsWords[0]), fNum2 = std::stof(vecsWords[2]);
    char cOp = vecsWords[1][0];
    float result;
    switch (cOp) {
        case '+':
            result = fNum1 + fNum2;
            break;
        case '-':
            result = fNum1 - fNum2;
            break;
        case '*':
            result = fNum1 * fNum2;
            break;
        case '/':
            result = fNum1 / fNum2;
            break;
        default:
            std::cout << "not a valid operator\n";
            return 0;
    }
    printf("%.1f %c %.1f = %.1f\n", fNum1, cOp, fNum2, result);
    return 0;
}