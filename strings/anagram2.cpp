/*
 *  This program evaluates two strings an
 *  decide if they are ANAGRAM or not.
 */

 /*
  * Process 1: 
  *   a. We sort both the strings
  *   b. Check if they are equal or not
  */

  // Note: We assume all letter are small in both the strings passed
  
#include <string>
#include <iostream>
#include <algorithm>

bool isAnagram(std::string s, std::string t){
  if (s.size() != t.size())
    return false;
  if (s.size() == 0 and t.size() == 0)
    return true;
  if (s == t)
    return true;
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());
  return s == t;
}

int main(){
  std::cout << isAnagram("hello", "helol") << std::endl;
  return 0;
}


