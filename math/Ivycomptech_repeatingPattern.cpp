#include <iostream>
#include <vector>


bool repeatedSubstr(std::string data, std::string& pattern){
  std::vector<std::string> subs;
  std::string temp = ""; 
  for (auto each : data){
    if (each == data[0]){
      subs.push_back(data[0] + temp);
      temp = "";
    }
    else
      temp += each;
  }
  subs.push_back(data[0] + temp);
  if (subs.size() <= 2){
    pattern = "";
    return false;
  }else{
    pattern = subs[1];
    for (int i = 2; i < (int)subs.size(); i++)
      if (subs[i] != pattern){
        pattern = "";
        return false;
      }
    return true;
  }
}

int main(){
  std::string pat;
  std::cout << repeatedSubstr("abcdababab", pat) << std::endl;
  std::cout << pat << std::endl;
  // std::cout << << std::endl;
  return 0;
}
