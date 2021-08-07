#include<stdio.h>
#include<string.h>
void stringRotatedByTwoPlaces(char s1[], char s2[],  int len) {
  int count = 0;
  for(int i = 2, j = 0; count < len && s2[j] != '\0'; i++, j++) {
    if(s1[i] == '\0' && count < len) {
      i = 0;
      count++;
    }

    if(s1[i] == s2[j]) {
      count++;
    }

    else {
      printf("Wrong");
      break;
    }
  printf("Correct");
  }

}
int main() {
  char s1[100];
  char s2[100];

  scanf("%s %s", s1, s2);
  int len1 = strlen(s1);
  stringRotatedByTwoPlaces(s1, s2, len1);
}