#include<stdio.h>
void anagram(char s1[], char s2[]) {
  int A[27] = {0};
  
  for(int i = 0; s1[i] != '\0'; i++) {
    if(s1[i] < 97) {
      s1[i] = s1[i] + 32; 
    }

    A[s1[i] - 97]++;
  }

  for(int i = 0; s2[i] != '\0'; i++) {
    A[s2[i] - 97]--;
  }

  for(int i = 0; i < 27; i++) {
    if(A[i] >= 1) {
      printf("Not a anagram");
      return;
    }

  }
  printf("Anagram");
}
int main() {
  char s1[100];
  char s2[100];

  scanf("%s %s", s1, s2);

  anagram(s1, s2);
}