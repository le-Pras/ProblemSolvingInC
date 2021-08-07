#include<stdio.h>

// void aToI(char s[]) {
//   int ans = 0, i = 0 ,flag = 0, nnc = -1;

//   if(s[0] == '-') {
//     flag++;
//   }

//   for(int i = flag; s[i] != '\0'; i++) {
//     if(s[i] >= '0' && s[i] <= '9') {
//       ans = ans * 10 + s[i] - '0';
//     }

//     else {
//       printf("%d", nnc);
//     }
//   }

//   printf("%d", ans);

// }

void aToI(char s[]) {
  int A[10] = {0};

  for(int i = 0; s[i] != '\0'; i++) {
    A[s[i] - 48]++;
  }
}
void main() {

  char s[10];
  scanf("%s", s);
  aToI(s);
}