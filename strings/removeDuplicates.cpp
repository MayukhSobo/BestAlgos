#include <iostream>
#include <string>
#include <map>

std::string removeDuplicates(std::string s){
  std::map<char, int> m;
  std::string ret = "";
  for (auto each : s){
    m[each]++;
  }
  for(auto each : s){
    if (m[each] == 1)
      ret += each;
  }
  return ret;
}

int main(){
  std::cout << removeDuplicates("Remove all the duplicate characters");
  return 0;
}
