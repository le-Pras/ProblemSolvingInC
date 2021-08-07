#include<stdio.h>

void tappingRainWater1(int A[], int n) {
  if(n <= 2) {
    printf("0");
  }

  else {
    int maxLeft = A[0];
    int maxRight = A[n-1];
    int water = 0;
    int left = 1, right = n-2;
    while(left <= right) {
      if(maxLeft < maxRight) {
        if(maxLeft <= A[left]) {
           maxLeft = A[left];
        }
        else {
          water += maxLeft - A[left];
        }

        left++;
      }

      else {
        if(maxRight <= A[right]) {
          maxRight = A[right];
        }
        else {
          water += maxRight - A[right];
        }

        right--;
      } 
    }

    printf("%d", water);
  }
}
int main() {
  int A[200];
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  tappingRainWater1(A, n);
}