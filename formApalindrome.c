#include<stdio.h>
#include<string.h>
void formPalindrome(char s[], int n) {
  char s1[100];
  int i = 0, j = n - 1, k = 0;
  
  while(j > i) {
    if(s[i] == s[j]) {
      i++;
      j++;
    }

    else if(s[i] != s[j] && s[j] != s1[k]){
      s[i] = s1[k];
      k++;
      j--;
    }
  }
  for(int s = 0; s1[s] != '\0'; i++) {
    printf("%c", s1[s]);
  }
}
void main() {
  char s[100];
  int n = strlen(s);
  scanf("%s", s);
  formPalindrome(s, n);
}