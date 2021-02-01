#include <iostream>
#include <cmath>

int main()
{
    int lim = 4'000'000;
    int fib_prev, fib_preprev, fib_cur, sum;
    sum = 0;
    fib_prev = 1;
    fib_cur = 2;

    while(fib_cur <= lim){
        if (fib_cur % 2 == 0){
            sum += fib_cur;
        }
        fib_preprev = fib_prev;
        fib_prev = fib_cur;
        fib_cur = fib_prev + fib_preprev;

    }
    std::cout << sum << std::endl;

    return 0;
}
