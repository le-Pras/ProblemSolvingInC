#include<stdio.h>
int missingNum(int A[], int n) {
  int i;

  for(int i = 0; i < n;) {
    if(A[i] == i + 1) {
      i++;
    }

    else {
      return i + 1;
    }
  }
}

int main() {
  int n;
  printf("Number of elements");
  scanf("%d", &n);
  int A[n];
  for(int i = 0; i < n - 1; i++) {
    scanf("%d", &A[i]);
  }

  printf("the missing number is %d", missingNum(A, n));
}