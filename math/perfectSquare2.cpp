// Perfect square without sqrt function
#include <iostream>

bool is_perfectSquare(int num){
  int low = 1;
  int high = num;
  while(low <= high){
    int mid = low +  ((high - low) / 2);
    int quotient = num / mid;
    std::cout << quotient << std::endl;
    if (quotient == mid)
      return true;
    else if (quotient < mid)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return false;
}

int main(){
  std::cout << is_perfectSquare(5) << std::endl;
  // std::cout << (1 << 31) - 1 << std::endl;
  return 0;
}
