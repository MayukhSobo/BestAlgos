/*
 *  We need to recursively add the digits
 *  of a number till it becomes single digit
 *  number.
 */

#include <iostream>

int addRecur(int n){
  if(n == 0)
    return 0;
  else
    return n % 9 ? n % 9 : 9;
}


int main(){
  std::cout << addRecur(38);
}
