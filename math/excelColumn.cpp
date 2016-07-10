#include <iostream>
#include <string>

/*
std::string convertToTitle(int n){
  std::string table = "ZABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string ret = "";
  while(n){
    if (n % 26 == 0){
      ret = table[n % 26] + ret;
      n = n / 26 - 1;
    }else{
      ret = table[n % 26] + ret;
      n = n / 26;
    }
  }
  return ret;
}
*/

int titleToNumber(std::string s) {
  // int table[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int ret = 0;
  for (int i = 0; i < (int)s.size(); i++){
    ret = (s[i] - 'A' + 1) + (ret * 26);
  }
  return ret;
}

int main(){
  
  std::cout << titleToNumber("AZ") << std::endl;

  return 0;
}
