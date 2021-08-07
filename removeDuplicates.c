#include<stdio.h>
#include<string.h>

int removeDuplicates(char s[], int n) {

  int i;
  char x = '\0';
  for(i = 0; i < n;) {
    if(x == s[i]) {
      x = s[i];
      s[i] = '\0';
      i++;
    }
    
    else {
    if(s[i] != s[i + 1]) {
      i++;
    }
    
    else if(s[i] == s[i + 1]) {
      x = s[i];
      s[i] = '\0';
      i++;
    }
    }
  }

  for(i = 0; i < n; i++) {
    printf("%c", s[i]);
  }
}

void main() {
  char s[] = "acaaabbbacdddd";
  int n = strlen(s);
  removeDuplicates(s, n);
}