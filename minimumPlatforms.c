#include<stdio.h>

void display(int A[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d\n", A[i]);
  }
}

int bubble(int A[], int n) {
  int temp;
  for(int i = 0; i < n-1; i++) {
    for(int j = 0; j < n-i-1; j++) {
      if(A[j] > A[j + 1]) {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
  display(A, n);
}
int minPlatforms(int A[], int D[], int n) {
  int max = 1;
  int needed = 1;
  int i = 1, j = 0;
  while(i < n && j < n) {
    if(A[i] > D[j]) {
      max--;
      j++;
    }

    else if(A[i] <= D[j]) {
      max++;
      i++;
    }

    if(max > needed) {
      needed = max;
    }
  }

  return needed;
}
int main() {
  int A[] =  { 900, 940, 950, 1100, 1500, 1800 };
  int D[] =  { 910, 1200, 1120, 1130, 1900, 2000 };
  int n = 6;
  // scanf("%d", &n);

  // for(int i = 0; i < n; i++) {
  //   scanf("%d", &A[i]);
  // }
  // for(int i = 0; i < n; i++) {
  //   scanf("%d", &D[i]);
  // }
  bubble(A, n);
  bubble(D, n);

  printf("%d", minPlatforms(A, D, n));
}