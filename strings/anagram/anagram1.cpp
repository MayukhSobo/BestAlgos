/*
 *  This program evaluates two strings an
 *  decide if they are ANAGRAM or not.
 */

 /*
  * Process 1: 
  *     a. We use Hashing to increment the count the occurance
  *        of each letters in the first string
  *
  *     b. We use the same above mentioned technique to decrement
  *        the count for each letters in the second string
  *
  *     c. We check if any count is non-zero or not...If any non-zero
  *        then they are not ANAGRAM
  */

  // Note: We assume all letter are small in both the strings passed
  
#include <string>
#include <iostream>

bool isAnagram(std::string s, std::string t){
  if (s.size() != t.size())
    return false;
  if (s.size() == 0 and t.size() == 0)
    return true;
  if (s == t)
    return true;
  
  int table[26] = {0};
  for (int i = 0; i < (int)s.size(); i++){
   table[s[i] - 'a']++;
   table[t[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++){
    if (s[i] != 0){
      return false;
    }
  }
  return true;
}

int main(){
  std::cout << isAnagram("hello", "helol") << std::endl;
  return 0;
}


