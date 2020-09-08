#include <iostream>
#include <string>
#include <vector>
#include <sstream>

double evalEq(std::vector<std::string> vecsInput);
bool isNumber(std::string sStr);

int main() {
    std::vector<std::string> vecsInput;
    while (true) {
        std::cout << "Enter an equation (i.e. x + 5 = 4): ";
        std::string sInput;
        getline(std::cin, sInput);
        std::stringstream ss(sInput);
        std::string sIndivExpr;
        char cSpace = ' ';
        while (getline(ss, sIndivExpr, cSpace)) {
            vecsInput.push_back(sIndivExpr);
        }
        std::string sOps = "+-*/";
        if (vecsInput.size() != 5 || vecsInput[0] != "x" || sOps.find(vecsInput[1]) == std::string::npos
            || !isNumber(vecsInput[2]) || vecsInput[3] != "=" || !isNumber(vecsInput[4])) {
                std::cout << "Invalid expression\n";
                vecsInput.clear();
                continue;
            }
        break;
    }
    std::cout << "x is equal to " << evalEq(vecsInput) << std::endl;


    return 0;
}

bool isNumber(std::string sStr) {
    for (int i = 0; i < sStr.length(); i++) {
        if (!isdigit(sStr[i]) && sStr[i] != '.') return false;
    }
    return true;
}

double evalEq(std::vector<std::string> vecsInput) {
    double dbNum1 = std::stod(vecsInput[2]);
    double dbNum2 = std::stod(vecsInput[4]);
    switch (vecsInput[1][0]) {
        case '+':
            return dbNum2 - dbNum1;
        case '-':
            return dbNum2 + dbNum1;
        case '*':
            return dbNum1 != 0 ? dbNum2 / dbNum1 : __DBL_MAX__;
        case '/':
            return dbNum2 * dbNum1;
    }
    return 0;
}