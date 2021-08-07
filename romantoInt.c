#include<stdio.h>

int romanToInt(char s[]) {
  int roman = 0;

  for(int i = 0; s[i] != '\0'; i++) {
    if(s[i] == 'I') {
      roman = roman + 1;
    }

    else if(s[i] == 'V') {
      roman = roman + 5;
    }

    else if(s[i] == 'X') {
      roman = roman + 10;
    }

    else if(s[i] == 'L') {
      roman = roman + 50;
    }
    else if(s[i] == 'C') {
      roman = roman + 100;
    }

    else if(s[i] == 'D') {
      roman = roman + 500;
    }

    else if(s[i] == 'M') {
      roman = roman + 1000;
    }

    else {
      printf("Enter valid Number");
    }
  }

  return roman;
}
int main() {
  char s[100];
  scanf("%s", s);

  printf("%d", romanToInt(s));
}