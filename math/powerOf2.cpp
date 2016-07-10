#include <iostream>

// bool isPowerOfTwo(int n) {
  // for (int i = 0; i < 32; i++){
    // if ((1 << i) == n)
      // return true;
  // }
  // return false;
// }

bool isPowerOfTwo(int n){
  return (n > 0) and (1073741824 % n == 0);   
}


int main(){
  std::cout << isPowerOfTwo(-1073741824) << std::endl;
  
  return 0;
}
