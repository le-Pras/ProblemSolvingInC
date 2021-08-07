#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int maxim(int a, int b) {

  if(a > b) {
    return a;
  }

  else {
    return b;
  }
}
int longestDistinctChar(char s[]) {
  int A[27] = {0};

  int i = 0, j= 0, n = strlen(s);

  A[s[0] - 97]++;
  int ans = 1;
  while(j < n - 1) {
    if(A[s[j + 1] - 97] == 0) {
      j++;
      A[s[j] - 97]++;
      ans = maxim(ans, j - i + 1);
    }

    else {
      A[s[i++] - 97]--;
    }
  }

  return ans;
  
}

void main() {
  char s[100];
  scanf("%s", s);

  printf("%d", longestDistinctChar(s));
}