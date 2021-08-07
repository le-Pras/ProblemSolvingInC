#include<stdio.h>
int sortArrays(int A[], int n) {
  int i, count0 = 0, count1 = 0, count2 = 0;

  for(int i = 0; i < n; i++) {
    switch(A[i]) {
      case 0: {
        count0++;
        break;
      }
      case 1: {
        count1++;
        break;
      }
      case 2: {
        count2++;
        break;
      }
    }
  }

  i = 0;
  while(count0 > 0) {
    A[i] = 0;
    count0--;
    i++;
  }
  while(count1 > 0) {
    A[i] = 1;
    count1--;
    i++;
  }
  while(count2 > 0) {
    A[i] = 2;
    count2--;
    i++;
  }

  for(i = 0; i < n;i++) {
    printf("%d\n", A[i]);
  }
}
int main() {
  int A[100];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  sortArrays(A, n);

}