/*
 * The objective is to add two
 * numbers without using any
 * type of arithmatic operators
 */
#include <iostream>

int getSum(int a, int b){
  int carry;
  while(b){
    carry = a & b;
    a = a ^ b;
    b = carry << 1;
  }
  return a;
}


int main(){
  std::cout << getSum(252, 524);

}
