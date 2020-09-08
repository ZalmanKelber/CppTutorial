#include <iostream>
#include <math.h>
#include <vector>

bool isPrime(int num);
std::vector<int> getPrimes(int p);

int main() {
    int nInput;
    do {
        std::cout << "Enter number: ";
        std::cin >> nInput;
    } while (!isPrime(nInput));
    std::vector<int> primes = getPrimes(nInput);
    for (auto y: primes) std::cout << y << std::endl;

    return 0;
}

bool isPrime(int num) {
    double sq = sqrt(num);
    int lim = floor(sq);
    for (int i = 2; i <= lim; i++) {
        if (num % i == 0) {
            // std::cout << "divisible by " << i << std::endl;
            return false;
        }
    }
    return true;
}

std::vector<int> getPrimes(int p) {
    std::vector<int> primes;
    for (int i = 2; i <= p; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}