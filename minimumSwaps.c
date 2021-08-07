#include<stdio.h>

int minimumSwaps(char s[10000], int n) {
  int swaps = 0, imbalance = 0;
  int countRight = 0, countLeft = 0;

  for(int i = 0; i < n; i++) {
    if(s[i] == '(') {
      countLeft++;

      if(imbalance > 0) {
        swaps += imbalance;
        imbalance--;
      }
    }

    else if(s[i] == ')') {
      countRight++;

      imbalance = countRight - countLeft;
    }
  }

  return swaps;
}
int main() {
  char s[10000];
  scanf("%s", s);
  int n = 0;
  for(int i = 0; s[i] != '\0'; i++) {
    n = n + 1;
  }
  printf("%d",minimumSwaps(s, n));
}

// #include<stdio.h>

// void main() {
//   static int b[] = {10, 20, 30, 40, 50};

//   int i, *k;
//   k = &b[4] - 4;

//   for(i = 0; i <= 4; i++) {
//     printf("%d", *k);
//     k++;
//   }
// }