#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string sAge;
    do {
        std::cout << "Enter age: ";
        getline(std::cin, sAge);
    } while (!std::regex_match(sAge, std::regex("(^[0-9]+$)")));
    int nAge = std::stoi(sAge);
    if (nAge < 5) 
        std::cout << "Too young to attend school\n";
    else if (nAge == 5)
        std::cout << "Go to Kindergarten\n";
    else if (nAge < 18)
        std::cout << "Go to grade " << nAge - 5 << std::endl;
    else
        std::cout << "Go to college\n";
    return 0;
}