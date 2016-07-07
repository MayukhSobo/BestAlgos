#include <iostream>
#include <cmath>

static int fib(int n){
    double fiveInverse = 1.0 / sqrt(5.0);
    double phi = (1.0 + sqrt(5.0)) / 2.0;
    return (int)(floor(pow(phi, n) * fiveInverse + 0.5));
}

int countOfNoConsOnes(int numberOfbits){
    return fib(numberOfbits + 2);
}

int countOfConsOnes(int numberOfbits){
    return pow(2, numberOfbits) - countOfNoConsOnes(numberOfbits);
}


int main(){
    std::cout << countOfNoConsOnes(3) << "\n";
    std::cout << countOfConsOnes(3) << "\n";
 return 0;
}
