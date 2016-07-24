#include <iostream>
#include <algorithm>

bool is_anagram(std::string first, std::string second){
  std::sort(begin(first), end(first));
  std::sort(begin(second), end(second));
  return first == second;
}

int main(){
  std::cout << is_anagram("apple", "eaplp"); 
  return 0;
}
