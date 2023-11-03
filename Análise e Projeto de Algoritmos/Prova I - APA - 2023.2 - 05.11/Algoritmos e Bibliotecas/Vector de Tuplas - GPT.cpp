#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    std::vector<std::tuple<char, int, double>> vect;

    vect.push_back(std::make_tuple('A', 1, 3.14));
    vect.push_back(std::make_tuple('B', 2, 2.71));
    vect.push_back(std::make_tuple('C', 3, 1.618));

    for (const auto& element : vect) {
        char c;
        int i;
        double d;
        std::tie(c, i, d) = element;
        std::cout << "Char: " << c << ", Int: " << i << ", Double: " << d << std::endl;
    }

    return 0;
}
