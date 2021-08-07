#include<stdio.h>
int implementStrStr(char s[], char x[]) {
  int i = 0 ,j = 0, index;
  

  while(s[i] != '\0' && x[j] != '\0') {
    if(s[i] != x[j]) {
      i++;
    }

    else {
      index = i;

      while(s[i] == x[j]) {
        i++;
        j++;

        if(s[i] != x[j]) {
          index = -1;
          break;
        }
      }
      
    }
  }

  return index;
}
void main() {
  char s[100], x[10];

  scanf("%s %s", s, x);
  printf("%d", implementStrStr(s, x));
}