#include<stdio.h>
#include<string.h>
void reverseWords(char s[], int n) {
  int temp1;
  for(int i = 0, j = n - 1; i < j; i++, j--) {
    temp1 = s[i];
    s[i] = s[j];
    s[j] = temp1;
  }
  int j, k = 0, temp2;
  for(int i = 0; i < n;) {
    if(s[i] != ' ') {
      i++;
    }
    else {
      j = i - 1;

      while(k < j) {
        temp2 = s[k];
        s[k] = s[j];
        s[j] = temp2;
        j--;
        k++;
      }
      k = i + 1;
      i++;
    }
  }

  printf("%s", s);
}
int main() {
  char s[100];
  scanf("%[^\n]", s);

  int n = strlen(s);
  reverseWords(s, n);
}