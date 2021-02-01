#include <iostream>
#include <cmath>

int main()
{
    double cat_1, cat_2, hypo;
    std::cin >> cat_1 >> cat_2;
    hypo = std::pow(std::pow(cat_1, 2) + std::pow(cat_2, 2), 0.5);
    std::cout << hypo;
    return 0;
}
