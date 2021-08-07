#include<stdio.h>
int equillibriumPoint(int A[], int n) {
  int left = 0, right = n - 1;
  int mid;
  mid = n/2;
  if(n == 1) {
    return A[mid];
  }
  else if(right != mid || left != mid) {

    int leftSum = 0, rightSum = 0;
    while(left < mid) {
      leftSum = leftSum + A[left];
      left++;
    }

    while(right > mid) {
      rightSum = rightSum + A[right];
      right--;
    }

    if(rightSum == leftSum) {
      return A[mid];
    }
    else if(rightSum > leftSum){
      mid++;
      while(left < mid) {
      leftSum = leftSum + A[left];
      left++;
    }

    while(right > mid) {
      rightSum = rightSum + A[right];
      right--;
    }
    }
    else if(leftSum > rightSum) {
      mid--;
      while(left < mid) {
      leftSum = leftSum + A[left];
      left++;
    }

    while(right > mid) {
      rightSum = rightSum + A[right];
      right--;
    }
    }
  }

}
int main() {
  int n, A[1000];
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  printf("the equillibrium point %d", equillibriumPoint(A, n));
}