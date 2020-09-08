#include <iostream>
#include <vector>
#include <string>

std::string joinString(std::vector<std::string>& vInput, char separator);

int main() {

    std::vector<std::string> vList(5);
    vList[0] = "Arbace";
    vList[1] = "Idamante";
    vList[2] = "Elettra";
    vList[3] = "Idomeneo";
    vList[4] = "Ilia";
    std::string result = joinString(vList, ' ');
    std::cout << result << std::endl;

    return 0;
}

std::string joinString(std::vector<std::string>& vInput, char cSep) {
    std::string result = "";
    for (int i = 0; i < vInput.size(); i++) {
        result += vInput[i] + cSep;
    }
    return result.substr(0, result.length() - 1);
}