#include<stdio.h>
int elementSmallAndLarge(int A[], int n) {
  int left = 0, right = n - 1, i = 1, ans;
  while(i < right) {
    if(A[left] > A[i]) {
      i++;
    }
    else {
      ans = A[i];

      if(A[right] < ans) {
        return -1;
      }

      else if(A[right] > ans) {
        right--;
      }
    }
  }

  return ans; 
}
int main() {
  int A[100];
  int n;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  printf("%d", elementSmallAndLarge(A, n));
}