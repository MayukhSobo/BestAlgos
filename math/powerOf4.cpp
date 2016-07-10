#include <iostream>


/*
 * All the power of 4 numbers mod 3 is 1
 * But the reverse is not necessarily true
 * hence we remove the LSB 1 from the number 
 * and then check it with mod 3. If it is still
 * coming out to be 1 then it is definitely a power
 * of 4, otherwise not..
 */

bool isPowerOfFour(int num) {
  return num > 0 and (num & num - 1) + num % 3 == 1;
}



int main(){
  std::cout << isPowerOfFour(1) << std::endl;
}
