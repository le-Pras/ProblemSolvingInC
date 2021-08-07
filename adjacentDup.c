#include<stdio.h>
#include<string.h>
void adjacentDup(char s[], int n) {
  int i = 0;

  while(s[i] != '\0') {
    if(s[i] != s[i + 1]) {
      printf("%c", s[i]);
      i++;
    }
    else if(s[i + 1] && s[i] == s[i + 1]){

      while(s[i + 1] && s[i] == s[i + 1]) {
        i++;
      }

      i++;
    }
  }
}
int main() {
  char s[100];
  scanf("%s", s);
  int n = strlen(s);
  adjacentDup(s, n);
}