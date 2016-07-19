#include <iostream>
#include <vector>
#include <bitset>
#define SIZE 3
int main(){
  
  std::vector<char> c {'a', 'b', 'c'};
  int N = 1 << (int)c.size();
  std::string s;
  std::string temp;
  std::vector<std::string> perms;
  std::bitset<SIZE> bs;
  for(int i = 1; i < N; i++){
    bs = i;
    s = bs.to_string<char, std::string::traits_type, std::string::allocator_type>();
    temp = "";
    for (int j = 0; j < SIZE; j++){
      if (s[j] == '1'){
       temp += c[j]; 
      }
    }
    perms.push_back(temp);
  }

  for (auto each: perms)
    std::cout << each << std::endl;

  return 0;
}
