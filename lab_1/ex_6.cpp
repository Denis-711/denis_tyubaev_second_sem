#include <iostream>
#include <cmath>

int main()
{
    int N;
    std::cin >> N;
    for (int i = 0; i <= N/2; i++){
        for(int j = 0; j < i; j++){
            std::cout << " ";
        }
        for(int j = 0; j < N - 2 * i; j++){
            std::cout << "*";
        }
        std::cout<< std::endl;
    }
    return 0;
}
