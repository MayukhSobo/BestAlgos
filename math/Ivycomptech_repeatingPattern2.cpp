#include <iostream>

bool repeatedSubstring(std::string data, std::string& pattern){
  std::string temp = "";
  pattern = "";
  for(int i = 1; i < (int)data.size(); i++){
   if (data[i] != data[0]){
     temp += data[i];
   }else{
     if (pattern == "")
        pattern = data[0] + temp;
     else if (pattern != (data[0] + temp)){
        pattern = "";
        return false;
     }
     temp = "";
    }
  }
  temp = data[0] + temp;
  if (temp != pattern)
    pattern = "";
   return (pattern == temp);
}

int main(){
  std::string p;
  std::cout << repeatedSubstring("abcdabab", p) << std::endl;
  std::cout <<  p << std::endl;
  return 0;
}
