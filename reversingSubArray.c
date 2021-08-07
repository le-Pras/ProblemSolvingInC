#include<stdio.h>
void reverseSubArray(int A[], int n, int k) {
  

  for(int i = 0; i < n;i++) {
    printf("%d", A[i]);
  }
} 
int main() {
  int n, k, A[100];
  scanf("%d", &n);
  scanf("%d", &k);

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  reverseSubArray(A, n, k);
}