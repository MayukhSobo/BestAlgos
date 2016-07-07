#include <iostream>
#include <cmath>

static int fib(int n){
    double fiveInverse = 1.0 / sqrt(5.0);
    double phi = (1.0 + sqrt(5.0)) / 2.0;
    return (int)(floor(pow(phi, n) * fiveInverse + 0.5));
}

int waysToformNumberWith_1_and_2(int number) {
    return fib(number + 1);
}

int main(){
    std::cout << waysToformNumberWith_1_and_2(40);
 return 0;
}

