#include <iostream>
#include <string>


std::string convertToBase(int n, int base){
  std::string table = "0123456789ABCDEF"; 
  std::string ret = "";
  while(n){
    ret = table[n % base] + ret; 
    n = n / base;
  }
  return ret;
}


int main(){
  
  std::cout <<  convertToBase(256, 16) << std::endl;

  return 0;
}
