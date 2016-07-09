#include <iostream>
#include <cmath>

// -----------------------------------------------------------------//
/*
 * This is the niave approach with
 * little bit square root optimisation
 */

bool IsPerfectSquare1(long long n){
  for (long long i = 1; i <= (long long)sqrt(n); i++){
    if ((i * i) == n)
      return true;
  }
    return false;
}

//----------------------------------------------------------------//
/*
 * Performance of the above mentioned algorithm degrades 
 * after 10^16 while the bolow mentioned ones performs well
 * till 10^18 or may be beyond
 */

 bool IsPerfectSquare2(long long n){
     long long squareRoot = (long long)sqrt(n);
     return ((squareRoot * squareRoot) == n);
 }

//---------------------------------------------------------------//

/*
 * Perfect squares if wriiten in hex form
 * can never ends up with 2, 3, 5, 6, 7, 8 or more than 9 (A..F)
 * Perfect squares in hex only ends up with 0, 1, 4, 9
 * But it doesn't mean all numbers that ends up with
 * 0, 1, 4, 9 are perfect squares
 *  So we can optimize the above algo further.
 */

bool IsPerfectSquare3(int n){
  int h = n & 0xf;
  if (h > 9 or h == 2 or h == 3 or h == 5 or h == 6 or h == 7 or h == 8)
    return false;

  int squareRoot = (int)sqrt(n);
  return ((squareRoot * squareRoot) == n);
}

int main(){
  // 1000000000
  for (int i = 1; i < 100000000; i++){
    IsPerfectSquare3(i);
  }
  return 0;
}
