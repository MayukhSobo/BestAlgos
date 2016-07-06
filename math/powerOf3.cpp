#include <iostream>
#include <string>
#define MAX 1162261467

bool powerOf3(int n){
  if (n <= 0)
    return false;
  if (n == MAX)
    return true;
  else if (n > MAX)
    return false;
  else
    return (MAX % n) == 0;
}


int main(int argc, char** argv){
  if (argc == 2)
    std::cout << powerOf3(atoi(argv[1])) << std::endl;
  return 0;
}
