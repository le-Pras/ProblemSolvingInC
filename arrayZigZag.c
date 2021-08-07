#include<stdio.h>
void print(int A[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d", A[i]);
  }
}
void arrayZigZag(int A[], int n) {
  int i = 0;
  
  while(i < n) {
    if(i % 2 == 0) {
      if(A[i] > A[i + 1]) {
        int temp;
        temp = A[i + 1];
        A[i + 1] = A[i];
        A[i] = temp;
        i++;
      }
      else {
        i++;
      }
    }


    else if(i % 2 != 0) {
      if(A[i] < A[i + 1]) {
        int temp;
        temp = A[i];
        A[i ] = A[i + 1];
        A[i + 1] = temp;
        i++;
      }
      else {
        i++;
      }
    }
  }

  print(A, n);
}
int main() {
  int A[100];
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  arrayZigZag(A, n);
}