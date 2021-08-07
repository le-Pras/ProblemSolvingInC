#include<stdio.h>
void lastIndexof1(int A[], int n) {
  int i =  0, ans;
  while(i < n) {
    if(A[i] == 0) {
      i++;
    }
    else if(A[i] == 1)  {
      ans = i;
      i++;
    }
  }
  printf("%d", ans);
}
int main() {
  int A[100];
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
lastIndexof1(A, n);
}