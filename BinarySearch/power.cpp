/*
 This uses the binary search to
 find pow(X, n)..This is biary search
 because instead of decrementing the value
 of n each time once, we are halving the
 value each time.The nested if else part
 is for the values of n < 0

 THIS IS AN EXAMPLE WHERE BINARY SEARCH IS USED
 EVEN WITHOUT ANY SORTED ARRAY

*/

#include <iostream>

double power(double X, int n){
    if (n == 0)
        return 1.0;
    double temp = power(X, n / 2);
    if (n % 2 == 0)
        return temp * temp;
    else{
        if (n > 0)
            return X * temp * temp;
        else
            return (temp * temp) / X;
    }
}



int main(){

    std::cout << power(2.0, -8) << std::endl;
    return 0;
}
