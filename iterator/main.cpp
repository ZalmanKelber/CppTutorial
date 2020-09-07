#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vecnNums(10);
    std::iota(std::begin(vecnNums), std::end(vecnNums), 0);
    for (auto y: vecnNums) if (y % 2 == 0) std::cout << y <<std::endl;

    return 0;
}