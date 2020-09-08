#include <iostream>
#include <string>
#include <vector>

int main() {

    std::cout << "Enter string: ";
    std::string sInput;
    std::cin >> sInput;
    int nums[sInput.length()];
    std::cout << "length: " << sInput.length() << std::endl;
    for (int i = 0; i < sInput.length(); i++) nums[i] = (int) sInput[i];
    for (auto y: nums) std::cout << y << std::endl;
    char chars[sInput.length()];
    for (int i = 0; i < sInput.length(); i++) 
        chars[i] = nums[i] < 97 ? (char) nums[i] : (char) (nums[i] - 32);
    for (auto y: chars) std::cout << y;
    std::cout << std::endl;
    return 0;
}