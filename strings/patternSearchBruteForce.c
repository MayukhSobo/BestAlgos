
#include <stdio.h>


int find(char *str, char *pat, int M, int N){
  // M is the length of the input string
  // N is the length of the pattern to search
  
  int i, j;
  for(i = 0; i < M - N; i++){
    for(j = 0; j < N; j++)
      if (str[i + j] != pat[j])
        break;
    if (j == N) return i;
  }
  return -1;
}

int main() {
  char *str = (char*)"HelloWorld!!";
  char *pat = (char*)"llo";
  printf("%d\n", find(str, pat, 12, 3));
return 0;
}
