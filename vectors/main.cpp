#include <iostream>
#include <vector>

std::vector<float> getInterest(float start, int years, float rate);

int main() {
    float start, rate;
    int years;
    std::cout << "How much do you want to invest? ";
    std::cin >> start;
    std::cout << "How many years do you want to invest? ";
    std::cin >> years;
    std::cout << "What interest rate do you expect? ";
    std::cin >> rate;
    std::vector<float> vecnInterest = getInterest(start, years, rate);
    std::cout << "You can expect to end up with " << vecnInterest[vecnInterest.size() -1] << std::endl;
    return 0;
}

std::vector<float> getInterest(float start, int years, float rate) {
    std::vector<float> result;
    result.push_back(start);
    for (int i = 0; i < years; i++) {
        float next = result[result.size() - 1] * (1 + rate / 100);
        result.push_back(next);
    }
    return result;
}

