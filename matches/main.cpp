#include <iostream>
#include <string>
#include <vector>

std::string replaceString(std::string sInput, std::string sSearch, std::string sReplace);

int main() {
    std::string str = "", query = "", rep = "";
    std::cout << "Enter string: ";
    getline(std::cin, str);
    std::cout << "Enter search query: ";
    getline(std::cin, query);
    std::cout << "Enter replacement phrase: ";
    getline(std::cin, rep);

    std::cout << replaceString(str, query, rep) << std::endl;
    return 0;
}

std::string replaceString(std::string sInput, std::string sSearch, std::string sReplace) {
    std::vector<int> indices;
    int counter = 0;
    while (true) {
        if (sInput.find(sSearch, counter) != std::string::npos) {
            indices.push_back(sInput.find(sSearch, counter));
            counter = sInput.find(sSearch, counter) + sSearch.length();
        } else break;
    }
    std::string result(sInput);
    for (int i = indices.size() - 1; i >= 0; i--) {
        result = result.replace(indices[i], sSearch.length(), sReplace); 
    }
    return result;
}