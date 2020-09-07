#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

    const float conversion = 1.60934;
    cout << "Enter nummber of miles: ";
    std::string sMiles;
    getline(cin, sMiles);
    int iMiles = std::stoi(sMiles);
    printf("%d miles is equal to %.4f kilometers\n", iMiles, iMiles * conversion);

    return 0;
}